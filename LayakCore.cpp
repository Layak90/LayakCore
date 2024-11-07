#include "LayakCore.h"
#include "Request.h"
#include "Response.h"
#include "StaticFileHandler.h"
#include <iostream>
#include <boost/asio.hpp> // Assurez-vous d'installer Boost Asio

using boost::asio::ip::tcp;

LayakCore::LayakCore() {}

void LayakCore::addRoute(const std::string& path, const std::function<std::string()>& handler) {
    router.addRoute(path, handler);
}

void LayakCore::run(int port) {
    boost::asio::io_context io_context;
    tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), port));

    while (true) {
        tcp::socket socket(io_context);
        acceptor.accept(socket);

        // Lire la requête
        std::array<char, 1024> buffer;
        socket.read_some(boost::asio::buffer(buffer));
        std::string request(buffer.data());

        // Extraire le chemin
        std::string path = request.substr(0, request.find(" "));

        // Gérer la requête
        Response response;
        if (path == "/static/style.css") {
            response.setContent(StaticFileHandler::serveFile("static/style.css"));
        } else {
            response.setContent(router.route(path));
        }

        // Envoyer la réponse
        boost::asio::write(socket, boost::asio::buffer(response.getContent()));
    }
}
#include "Router.h"

void Router::addRoute(const std::string& path, const std::function<std::string()>& handler) {
    routes[path] = handler;
}

std::string Router::route(const std::string& path) {
    if (routes.find(path) != routes.end()) {
        return routes[path]();
    }
    return "<h1>404 Not Found</h1>";
}
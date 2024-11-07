#include "Response.h"

Response::Response() {}

void Response::setContent(const std::string& content) {
    this->content = content;
}

std::string Response::getContent() const {
    return "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n" + content;
}
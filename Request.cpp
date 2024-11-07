#include "Request.h"

Request::Request(const std::string& path) : path(path) {}

std::string Request::getPath() const {
    return path;
}
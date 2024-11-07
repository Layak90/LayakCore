#include "StaticFileHandler.h"
#include <fstream>
#include <sstream>

std::string StaticFileHandler::serveFile(const std::string& filePath) {
    std::ifstream file(filePath);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}
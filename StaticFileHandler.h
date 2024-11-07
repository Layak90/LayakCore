#ifndef STATICFILEHANDLER_H
#define STATICFILEHANDLER_H

#include <string>

class StaticFileHandler {
public:
    static std::string serveFile(const std::string& filePath);
};

#endif // STATICFILEHANDLER_H
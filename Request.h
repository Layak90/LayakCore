#ifndef REQUEST_H
#define REQUEST_H

#include <string>

class Request {
public:
    Request(const std::string& path);
    std::string getPath() const;

private:
    std::string path;
};

#endif // REQUEST_H
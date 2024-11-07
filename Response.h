#ifndef RESPONSE_H
#define RESPONSE_H

#include <string>

class Response {
public:
    Response();
    void setContent(const std::string& content);
    std::string getContent() const;

private:
    std::string content;
};

#endif // RESPONSE_H
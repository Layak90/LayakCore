#ifndef ROUTER_H
#define ROUTER_H

#include <string>
#include <map>
#include <functional>

class Router {
public:
    void addRoute(const std::string& path, const std::function<std::string()>& handler);
    std::string route(const std::string& path);

private:
    std::map<std::string, std::function<std::string()>> routes;
};

#endif // ROUTER_H
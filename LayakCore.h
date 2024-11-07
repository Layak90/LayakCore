#ifndef LAYAKCORE_H
#define LAYAKCORE_H

#include <string>
#include <map>
#include <functional>
#include "Router.h"

class LayakCore {
public:
    LayakCore();
    void run(int port);
    void addRoute(const std::string& path, const std::function<std::string()>& handler);

private:
    Router router;
};

#endif // LAYAKCORE_H
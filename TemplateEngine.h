#ifndef TEMPLATEENGINE_H
#define TEMPLATEENGINE_H

#include <string>

class TemplateEngine {
public:
    std::string render(const std::string& templateName, const std::map<std::string, std::string>& variables);
};

#endif // TEMPLATEENGINE_H
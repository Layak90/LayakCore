#include "TemplateEngine.h"
#include <fstream>
#include <sstream>

std::string TemplateEngine::render(const std::string& templateName, const std::map<std::string, std::string>& variables) {
    std::ifstream file("templates/" + templateName);
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string content = buffer.str();

    for (const auto& pair : variables) {
        std::string placeholder = "{{" + pair.first + "}}";
        size_t pos = content.find(placeholder);
        while (pos != std::string::npos) {
            content.replace(pos, placeholder.length(), pair.second);
            pos = content.find(placeholder, pos + pair.second.length());
        }
    }
    return content;
}
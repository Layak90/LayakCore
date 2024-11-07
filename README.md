# LayakCore

LayakCore is a lightweight and powerful web framework written in C++. It allows you to easily create web applications with simple routing, a template engine, and static file handling. This framework is ideal for developers who want to learn how to build websites while using C++.

## Features

- **Simple Routing**: Easily manage the routes of your application.
- **Template Engine**: Dynamically render HTML pages with variables.
- **Static File Handling**: Serve CSS, JavaScript, and other static resources.
- **Ease of Use**: A straightforward API for quickly creating web applications.

## Prerequisites

- C++11 or higher
- [Boost](https://www.boost.org/) (for socket handling)
- A compatible C++ compiler (e.g., g++, clang++)

## Installation

1. **Clone the Repository**:

   Open your terminal and run the following command to clone the repository:

   ```bash
   git clone https://github.com/your-username/LayakCore.git
   cd LayakCore


**On Ubuntu:**
sudo apt-get install libboost-all-dev

**On macOS (using Homebrew):**
brew install boost

**Compile the Project:**
Use the following command to compile the project. This command compiles all the source files in the src directory and links the Boost library:
g++ -std=c++11 src/*.cpp -o LayakCore -lboost_system

**If you are using clang++, the command will be the same:**
clang++ -std=c++11 src/*.cpp -o LayakCore -lboost_system

**Run the Server:**
./LayakCore

**Use the main.cpp**

**Create Directories for Static Files and Templates:**

**Create a static directory for your CSS files and a templates directory for your HTML files:**
mkdir static templates

**Creating a Route**
To create a new route, use the addRoute method:

layak.addRoute("/about", []() {
    return "<h1>About</h1><p>This is an about page for our site.</p>";
});

**Using a Template Engine**
To use a template engine, create an HTML file in the templates directory and use it as follows:

#include "TemplateEngine.h"

// Example of rendering a template
TemplateEngine engine;
std::map<std::string, std::string> variables = {{"title", "Welcome"}, {"content", "This is dynamic content"}};
std::string rendered = engine.render("base.html", variables);

**Contribution**
Contributions are welcome! If you would like to improve LayakCore, feel free to open issues or pull requests.

*Layak**

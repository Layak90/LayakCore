#include "LayakCore.h"
#include <iostream>

std::string renderHome() {
    return "<h1>Bienvenue sur Mon Mini Site</h1><p>Ceci est un site généré avec LayakCore.</p>";
}

std::string renderForm() {
    return "<h1>Formulaire</h1><form action='/submit' method='POST'><input type='text' name='name' placeholder='Votre nom'><input type='submit' value='Envoyer'></form>";
}

std::string handleSubmit() {
    return "<h1>Merci!</h1><p>Votre formulaire a été soumis.</p>";
}

int main() {
    LayakCore layak;

    // Créer des routes
    layak.addRoute("/", renderHome);
    layak.addRoute("/form", renderForm);
    layak.addRoute("/submit", handleSubmit);

    // Lancer le serveur sur le port 8080
    layak.run(8080);

    return 0;
}
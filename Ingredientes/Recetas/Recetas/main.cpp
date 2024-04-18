#include "recetas.h"
#include <iostream>
#include <vector>

int main() {
    Recetas misRecetas;
    std::vector<std::string> misIngredientes;
    std::string ingrediente;
    char opcion;

    do {
        std::cout << "Introduce un ingrediente (o 'q' para salir): ";
        std::cin >> ingrediente;
        if (ingrediente != "q") {
            misIngredientes.push_back(ingrediente);
        }

        std::cout << "¿Quieres añadir otro ingrediente? (s/n): ";
        std::cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    std::vector<std::string> sugerencias = misRecetas.sugerirRecetas(misIngredientes);

    if (!sugerencias.empty()) {
        std::cout << "Puedes hacer las siguientes recetas con tus ingredientes:\n";
        for (const auto& sugerencia : sugerencias) {
            std::cout << "- " << sugerencia << "\n";
        }
    }
    else {
        std::cout << "Lo siento, no hay recetas disponibles con tus ingredientes.\n";
    }

    return 0;
}
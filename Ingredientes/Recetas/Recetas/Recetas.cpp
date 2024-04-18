#include "recetas.h"
#include <algorithm>
#include <vector>

Recetas::Recetas() {
    recetas["Tortilla de patatas"] = { "patatas", "huevos", "aceite", "sal" };
    recetas["Ensalada César"] = { "lechuga", "pollo", "pan", "queso parmesano", "salsa César" };
    recetas["Pasta al pesto"] = { "pasta", "salsa pesto", "queso parmesano" };
    recetas["Sopa de tomate"] = { "tomates", "cebolla", "ajo", "caldo de verduras" };
    recetas["Arroz con pollo"] = { "arroz", "pollo", "cebolla", "ajo", "pimientos" };
}

std::vector<std::string> Recetas::sugerirRecetas(const std::vector<std::string>& ingredientes) {
    std::vector<std::string> sugerencias;
    for (const auto& receta : recetas) {
        bool todosLosIngredientesEstan = true;
        for (const auto& ingrediente : ingredientes) {
            if (std::find(ingredientes.begin(), ingredientes.end(), ingrediente) == ingredientes.end()) {
                todosLosIngredientesEstan = false;
                break;
            }
        }
        if (todosLosIngredientesEstan) {
            sugerencias.push_back(receta.first);
        }
    }
    return sugerencias;
}

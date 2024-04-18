#ifndef RECETAS_H
#define RECETAS_H

#include <string>
#include <vector>
#include <map>

class Recetas {
public:
    Recetas();
    std::vector<std::string> sugerirRecetas(const std::vector<std::string>& ingredientes);
private:
    std::map<std::string, std::vector<std::string>> recetas;
};

#endif

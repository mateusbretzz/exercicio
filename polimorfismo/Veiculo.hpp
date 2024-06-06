#ifndef VEICULO_HPP
#define VEICULO_HPP

#include <iostream>
#include <string>

class Veiculo {
protected:
    std::string marca;
    std::string modelo;
    int capacidade; // Capacidade de carga em toneladas

public:
    Veiculo(const std::string& marca, const std::string& modelo, int capacidade)
        : marca(marca), modelo(modelo), capacidade(capacidade) {}

    virtual void exibirDados() const {
        std::cout << "Marca: " << marca << ", Modelo: " << modelo 
                  << ", Capacidade: " << capacidade << " toneladas\n";
    }

};

#endif 

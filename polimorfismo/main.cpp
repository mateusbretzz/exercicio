#include <iostream>
#include <vector>
#include "Caminhao.hpp"
#include "Van.hpp"

int main() {
    // Criação dos objetos Caminhao e Van
    Caminhao caminhao1("Mercedes", "Actros", 18, 4);
    Van van1("Ford", "Transit", 1, 12);

    // Vetor de ponteiros para Veiculo
    std::vector<Veiculo*> veiculos;

    // Adicionar os veículos ao vetor
    veiculos.push_back(&caminhao1);
    veiculos.push_back(&van1);

    // Exibindo dados dos veiculos
    for (const auto& veiculo : veiculos) {
        veiculo->exibirDados();
    }

    return 0;
}

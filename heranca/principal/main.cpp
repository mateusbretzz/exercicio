#include <iostream>
#include "../funcionarios-hpp/Estagiario.hpp"
#include "../funcionarios-hpp/FuncionarioRegular.hpp"
#include "../funcionarios-hpp/Gerente.hpp"



int main() {
    FuncionarioRegular fr("Mateus", 1, 3000.0);
    Gerente g("Rodrigo", 2, 5000.0, 2000.0);
    Estagiario e("Beatriz", 3, 1500.0);

    std::cout << "Salário Total de Mateus (Funcionário Regular): " << fr.calcularSalarioTotal() << std::endl;
    std::cout << "Salário Total de Rodrigo (Gerente): " << g.calcularSalarioTotal() << std::endl;
    std::cout << "Salário Total de Beatriz (Estagiário): " << e.calcularSalarioTotal() << std::endl;

    return 0;
}

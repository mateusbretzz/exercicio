#include "../funcionarios-hpp/Estagiario.hpp"

Estagiario::Estagiario(std::string nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase * 0.8) {}

double Estagiario::calcularSalarioTotal() const {
    return salarioBase;
}

#include "../funcionarios-hpp/FuncionarioRegular.hpp"

FuncionarioRegular::FuncionarioRegular(std::string nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase) {}

double FuncionarioRegular::calcularSalarioTotal() const {
    return salarioBase;
}

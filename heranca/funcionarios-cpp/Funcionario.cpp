#include "../funcionarios-hpp/Funcionario.hpp"

using std::string;

Funcionario::Funcionario(string nome, int id, double salarioBase)
    : nome(nome), id(id), salarioBase(salarioBase) {}

double Funcionario::calcularSalarioTotal() const {
    return salarioBase;
}

Funcionario::~Funcionario() {}

#ifndef FUNCIONARIO_REGULAR_HPP
#define FUNCIONARIO_REGULAR_HPP

#include "Funcionario.hpp"

class FuncionarioRegular : public Funcionario {
public:
    FuncionarioRegular(std::string nome, int id, double salarioBase);
    double calcularSalarioTotal() const override;
};

#endif 
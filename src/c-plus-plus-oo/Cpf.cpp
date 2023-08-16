#include "Cpf.hpp"

Cpf::Cpf(std::string cpfNumber) : cpfNumber(cpfNumber)
{
	validateCpf();
}

void Cpf::validateCpf()
{
	// TODO: @sergiolucascaps - Implementar
}

std::string Cpf::getCpf() const
{
	return cpfNumber;
}
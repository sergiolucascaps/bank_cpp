#include "Cpf.hpp"

Cpf::Cpf(std::string cpfNumber) : cpfNumber(cpfNumber)
{
	validateCpf();
}

void Cpf::validateCpf()
{
	// TODO: @sergiolucascaps - Implementar
}

std::string Cpf::getHolderCpf() const
{
	return cpfNumber;
}
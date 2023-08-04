#include "Holder.hpp"
#include<iostream>
#include<string>

Holder::Holder(std::string holderName, Cpf cpf)
	: holderName(holderName), cpf(cpf)
{
	validateHolderName();
}

std::string Holder::getHolderName() const
{
	return holderName;
}

void Holder::validateHolderName()
{
	if (holderName.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}

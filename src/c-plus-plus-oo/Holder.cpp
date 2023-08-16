#include "Holder.hpp"
#include<iostream>

Holder::Holder(Cpf cpf, std::string name) : Person(cpf, name)
{
}

std::string Holder::getName() {
	return name;
}

std::string Holder::getCpfNumber() {
	return cpf.getCpf();
}

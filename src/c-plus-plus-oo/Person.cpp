#include "Person.hpp"
#include<iostream>

Person::Person(Cpf cpf, std::string name):cpf(cpf), name(name)
{
	validateName();
}

void Person::validateName()
{
	if (name.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}
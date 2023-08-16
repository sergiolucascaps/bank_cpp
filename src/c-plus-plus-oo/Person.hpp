#pragma once
#include "Cpf.hpp"
#include <string>

class Person
{
protected:
	Cpf cpf;
	std::string name;

public:
	Person(Cpf cpf, std::string name);

private:
	void validateName();
};


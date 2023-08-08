#pragma once
#include<string>
#include "Cpf.hpp"

class Employee
{
private:
	Cpf cpf;
	std::string nome;
	float wage;

public:
	Employee(Cpf cpf, std::string nome, float wage);
};


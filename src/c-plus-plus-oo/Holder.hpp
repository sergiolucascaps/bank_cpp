#pragma once
#include<string>
#include "Cpf.hpp"
#include "Person.hpp"

class Holder : public Person
{
public:
	Holder(Cpf cpf, std::string name);
	std::string getName();
	std::string getCpfNumber();
};


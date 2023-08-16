#pragma once
#include "Person.hpp"
#include<string>
#include "Cpf.hpp"

class Employee : public Person
{
private:
	float wage;

public:
	Employee(Cpf cpf, std::string name, float wage);
};


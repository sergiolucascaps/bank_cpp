#pragma once
#include<string>
#include "Cpf.hpp"

class Holder
{
private:
	std::string holderName;

public:
	Cpf cpf;

public:
	Holder(std::string holderName, Cpf cpf);
	std::string getHolderName() const;

private:
	void validateHolderName();
};


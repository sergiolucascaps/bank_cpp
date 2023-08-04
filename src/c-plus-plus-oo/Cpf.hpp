#pragma once
#include<string>

class Cpf
{
private:
	std::string cpfNumber;

public:
	Cpf(std::string cpfNumber);
	std::string getHolderCpf() const;

private:
	void validateCpf();
};


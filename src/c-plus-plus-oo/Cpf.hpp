#pragma once
#include<string>

class Cpf
{
private:
	std::string cpfNumber;

public:
	Cpf(std::string cpfNumber);
	std::string getCpf() const;

private:
	void validateCpf();
};


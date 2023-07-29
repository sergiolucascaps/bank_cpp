#pragma once
#include<string>

class Conta
{
private:
	static int qtdAccountingsCreated;
public:
	static int getQtdAccountingsCreated();

private:
	std::string number;
	std::string holderCpf;
	std::string holderName;
	float balance;

public:
	Conta(std::string number, std::string holderCpf, std::string holderName);
	void withdraw(float valorSaque);
	void deposit(float valorDeposito);

	// getters
	float getBalance();
	std::string getNumber() const;
	std::string getHolderCpf() const;
	std::string getHolderName() const;

	// setters
	/*void setNumber(std::string nm);
	void setHolderCpf(std::string cpf);
	void setHolderName(std::string name);*/
};
#pragma once
#include<string>
#include "Holder.hpp"

class Conta
{
private:
	static int qtdAccountingsCreated;
public:
	static int getQtdAccountingsCreated();

private:
	std::string number;
	float balance;

public:
	Conta(std::string number, Holder holder);
	~Conta();
	void withdraw(float valorSaque);
	void deposit(float valorDeposito);
	Holder holder;

	// getters
	float getBalance() const;
	std::string getNumber() const;

	// setters
	/*void setNumber(std::string nm);
	void setHolderCpf(std::string cpf);
	void setHolderName(std::string name);*/
};
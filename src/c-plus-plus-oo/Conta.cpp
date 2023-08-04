#include "Conta.hpp"
#include <iostream>

int Conta::qtdAccountingsCreated = 0;

Conta::Conta(std::string number, Holder holder) :
	number(number),
	holder(holder),
	balance(0)
{
	//Holder(holder)
	qtdAccountingsCreated++;
	/*this->number = number;
	this->holderCpf = holderCpf;
	this->holderName = holderName;
	this->balance = 0;*/
}

Conta::~Conta()
{
	qtdAccountingsCreated--;
}

int Conta::getQtdAccountingsCreated()
{
	return qtdAccountingsCreated;
}

void Conta::withdraw(float withdrawalAmount)
{
	if (withdrawalAmount < 0) {
		std::cout << "Valor negativo informado para saque. Operação não realizada" << std::endl;
		system("pause");
		return;
	}

	if (withdrawalAmount > balance) {
		std::cout << "Valor do saque superior ao saldo atual. Operação não realizada" << std::endl;
		system("pause");
		return;
	}

	balance -= withdrawalAmount;
}

void Conta::deposit(float depositAmount)
{
	if (depositAmount < 0) {
		std::cout << "Valor negativo informado para depósito. Operação não realizada" << std::endl;
	}

	balance += depositAmount;
}

float Conta::getBalance() const
{
	return balance;
}

std::string Conta::getNumber() const
{
	return number;
}

//void Conta::setNumber(std::string nm)
//{
//	number = nm;
//}
//
//void Conta::setHolderCpf(std::string cpf)
//{
//	holderCpf = cpf;
//}
//
//void Conta::setHolderName(std::string name)
//{
//	holderName = name;
//}

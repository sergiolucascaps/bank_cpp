#include "Conta.hpp"
#include <iostream>

int Conta::qtdAccountingsCreated = 0;

Conta::Conta(std::string number, std::string holderCpf, std::string holderName) :
	number(number),
	holderCpf(holderCpf),
	holderName(holderName),
	balance(0)
{
	qtdAccountingsCreated++;
	/*this->number = number;
	this->holderCpf = holderCpf;
	this->holderName = holderName;
	this->balance = 0;*/
}

int Conta::getQtdAccountingsCreated()
{
	return qtdAccountingsCreated;
}

void Conta::withdraw(float withdrawalAmount)
{
	if (withdrawalAmount < 0) {
		std::cout << "Valor negativo informado para saque. Operação não realizada" << std::endl;
	}

	if (withdrawalAmount > balance) {
		std::cout << "Valor do saque superior ao saldo atual. Operação não realizada" << std::endl;
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

float Conta::getBalance()
{
	return balance;
}

std::string Conta::getNumber() const
{
	return number;
}

std::string Conta::getHolderCpf() const
{
	return holderCpf;
}

std::string Conta::getHolderName() const
{
	return holderName;
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

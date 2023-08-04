#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Holder.hpp"
#include "Cpf.hpp"

using namespace std;

void writeHolderData(Conta& c) {
	cout << "Cliente: " << c.holder.getHolderName() << " CPF: " << c.holder.cpf.getHolderCpf() << endl;
	cout << "Nr Conta: " << c.getNumber() << endl;
	cout << "Saldo: " << c.getBalance() << endl;
}

void writeSeparateCharacters(short qtd)
{
	cout << endl << endl;

	for (short i = 0; i < qtd; i++)
	{
		cout << "*";
	}

	cout << endl << endl;
}

void writeMenu()
{
	cout << "*******************************************" << endl;
	cout << "******** ESCOLHA A OP��O DESEJADA *********" << endl;
	cout << "******** SAQUE (1) ************************" << endl;
	cout << "******** DEP�SITO (2) *********************" << endl;
	cout << "******** SAIR (0) *************************" << endl;
	cout << "*******************************************" << endl;

	cout << endl;
	cout << "OP��O: ";

}

void displayBalance(const Conta& conta)
{
	cout << "O saldo da conta �: " << conta.getBalance() << endl;
}


int main()
{
	Conta c("0104", Holder("Sergio Lucas", Cpf("090.999.888.70")));
	

	short op;
	do {
		system("clear||cls");
		cout << "Quantidade de contas criadas at� o momento: " << c.getQtdAccountingsCreated() << endl;
		writeHolderData(c);
		writeSeparateCharacters(10);
		writeMenu();
		cin >> op;

		switch (op)
		{
			float value;
			case 1:

				cout << "Valor do saque: ";
				cin >> value;
				c.withdraw(value);

				break;
			case 2:

				cout << "Valor do dep�sito: ";
				cin >> value;
				c.deposit(value);

				break;
			default:
				break;
		}

	} while (op != 0);

	return 0;
}
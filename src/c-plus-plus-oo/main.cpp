#include<iostream>
#include<string>
#include "Conta.hpp"

using namespace std;

void writeHolderData(Conta& c) {
	cout << "Cliente: " << c.getHolderName() << " CPF: " << c.getHolderCpf() << endl;
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
	cout << "******** ESCOLHA A OPÇÃO DESEJADA *********" << endl;
	cout << "******** SAQUE (1) ************************" << endl;
	cout << "******** DEPÓSITO (2) *********************" << endl;
	cout << "******** SAIR (0) *************************" << endl;
	cout << "*******************************************" << endl;

	cout << endl;
	cout << "OPÇÃO: ";

}


int main()
{
	Conta c("0415", "012.345.678-90", "Sergio Lucas");

	short op;
	do {
		system("clear||cls");
		cout << "Quantidade de contas criadas até o momento: " << c.getQtdAccountingsCreated() << endl;
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

				cout << "Valor do depósito: ";
				cin >> value;
				c.deposit(value);

				break;
			default:
				break;
		}

	} while (op != 0);

	return 0;
}
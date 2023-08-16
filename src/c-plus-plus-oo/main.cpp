#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Holder.hpp"
#include "Cpf.hpp"

using namespace std;

void writeHolderData(Conta& c) {
	cout << "Cliente: " << c.holder.getName() << " CPF: " << c.holder.getCpfNumber() << endl;
	cout << "Nr Conta: " << c.getNumber() << endl;
	cout << "Saldo: " << c.getBalance() << endl;
}

void writeSeparateCharacters(short qtd, short linesStart = 0, short linesEnd = 0)
{
	for (short i = 0; i < linesStart; i++)
	{
		cout << endl;
	}

	for (short i = 0; i < qtd; i++)
	{
		cout << "*";
	}

	for (short i = 0; i < linesEnd; i++)
	{
		cout << endl;
	}
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

void displayBalance(const Conta& conta)
{
	cout << "O saldo da conta é: " << conta.getBalance() << endl;
}


int main()
{
	Conta c("0104", Holder(Cpf("090.999.888.70"), "Sergio Lucas"));
	

	short op;
	do {
		system("clear||cls");
		cout << "Quantidade de contas criadas até o momento: " << c.getQtdAccountingsCreated() << endl;
		writeHolderData(c);
		writeSeparateCharacters(10, 2, 2);
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
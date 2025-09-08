#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string player;
	string options[3] = { "камень","ножницы","бумага" };

	srand(time(NULL));
	cout << "Введите: камень, ножницы, бумага" << endl;
	cin >> player;
	string computer = options[rand() % 3];
	cout << "Компьютер выбрал: " << computer << endl;
	if (player == computer)
	{
		cout << "Ничья" << endl;
	}
	else if ((player == "камень" && computer == "ножницы") || (player == "ножницы" && computer == "бумага")||(player == "бумага" && computer == "камень"))
	{
		cout << "Вы победили!" << endl;
	}
	else
	{
		cout << "Компьютер победил!" << endl;
	}
	return 0;
}

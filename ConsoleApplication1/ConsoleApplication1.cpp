#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ptr;
	cout << "(1-налево, 2-направо, 3-вперед, 4-назад)";

	cin >> ptr;

	switch (ptr)
	{
	case 1:
		cout << "Встретил дракона(проиграл)" << endl;
		break;

	case 2:
		cout << "Нашел клад" << endl;
		break;

	case 3:
		cout << "Вышел к реке" << endl;
		break;

	case 4:
		cout << "Вернулся к началу" << endl;
		break;

	case 5:
		cout << "Победил дракона" << endl;
		break;
	}

	return 0;
}

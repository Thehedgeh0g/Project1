#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib> // для system
using namespace std;

static string vivod = "";

int zadanieOdin() {
	float ax, ay, bx, by, lengthIntermediateX, lengthIntermediateY, length;
	cout << "Введите координаты точек в виде A(x, y) B(x, y), то есть х у х у" << endl;
	cin >> ax >> ay >> bx >> by;
	cout << endl;
	lengthIntermediateX = abs(bx - ax);
	lengthIntermediateY = abs(by - ay);
	length = sqrt(pow(lengthIntermediateX, 2) + pow(lengthIntermediateY, 2));
	cout<< "Длина отрезка составляет: " << length << endl;
	return 0;
}

int zadanieDva() {
	int importingNumber;
	int a, b, c;
	cout << "Введите 3-х значное число" << endl;
	cin >> importingNumber;
	cout << endl;
	a = importingNumber / 100;
	b = (importingNumber % 100) / 10;
	c = (importingNumber % 100) % 10;
	vivod = a, " ", b, " ", c;
	cout << a << " " << b << " " << c << endl;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int choose = 0;
	int i = 0;
	while (i == 0)
	{
		choose = 0;
		cout << "Выберите задание:" << endl;
		cout << "1 - Задание со слайда" << endl;
		cout << "2 - Задание с листочка" << endl;
		cout << "3 - Чтобы выйти из программы" << endl;
		cin >> choose;
		cout << endl;
		if (choose == 1) {
			zadanieOdin();
			cout << "Нажмите клавишу enter чтобы вернуться в меню";
			getch();
			system("cls");
		}
		else if (choose == 2) {
			zadanieDva();
			cout << "Нажмите клавишу enter чтобы вернуться в меню";
			getch();
			system("cls");
		}
		else if (choose == 3) {
			i = 1;
			system("cls");
		}
		else {
			cout << "Ошибка при вводе числа нажмите клавишу enter чтобы вернуться в меню";
			cout << endl;
			getch();
			system("cls");
		}
	}
	return 0;
}

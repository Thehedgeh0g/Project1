#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib> // ��� system
using namespace std;

static string vivod = "";

int zadanieOdin() {
	float ax, ay, bx, by, lengthIntermediateX, lengthIntermediateY, length;
	cout << "������� ���������� ����� � ���� A(x, y) B(x, y), �� ���� � � � �" << endl;
	cin >> ax >> ay >> bx >> by;
	cout << endl;
	lengthIntermediateX = abs(bx - ax);
	lengthIntermediateY = abs(by - ay);
	length = sqrt(pow(lengthIntermediateX, 2) + pow(lengthIntermediateY, 2));
	cout<< "����� ������� ����������: " << length << endl;
	return 0;
}

int zadanieDva() {
	int importingNumber;
	int a, b, c;
	cout << "������� 3-� ������� �����" << endl;
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
		cout << "�������� �������:" << endl;
		cout << "1 - ������� �� ������" << endl;
		cout << "2 - ������� � ��������" << endl;
		cout << "3 - ����� ����� �� ���������" << endl;
		cin >> choose;
		cout << endl;
		if (choose == 1) {
			zadanieOdin();
			cout << "������� ������� enter ����� ��������� � ����";
			getch();
			system("cls");
		}
		else if (choose == 2) {
			zadanieDva();
			cout << "������� ������� enter ����� ��������� � ����";
			getch();
			system("cls");
		}
		else if (choose == 3) {
			i = 1;
			system("cls");
		}
		else {
			cout << "������ ��� ����� ����� ������� ������� enter ����� ��������� � ����";
			cout << endl;
			getch();
			system("cls");
		}
	}
	return 0;
}

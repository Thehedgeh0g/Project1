#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

static string vivod = "";

int zadanieSlide() {
	float ax, ay, bx, by, lengthIntermediateX, lengthIntermediateY, length;
	cout << "������� ���������� ����� � ���� A(x, y) B(x, y), �� ���� � � � �" << endl;
	cin >> ax >> ay >> bx >> by;
	lengthIntermediateX = fabs(bx - ax);
	lengthIntermediateY = fabs(by - ay);
	length = sqrt(pow(lengthIntermediateX, 2) + pow(lengthIntermediateY, 2));
	cout << "����� ������� ����������: " << length << endl;
	return 0;
}

int zadanieDva() {
	int importingNumber = 0;
	int a, b, c;
	importingNumber = 100 + rand() % (999 - 100 + 1);
	cout << importingNumber << endl;
	a = importingNumber / 100;
	b = (importingNumber % 100) / 10;
	c = (importingNumber % 100) % 10;
	vivod = a, " ", b, " ", c;
	cout << a << " " << b << " " << c << endl;
	return 0;
}

int zadanieOdin() {
	float ax, ay, bx, by, cx, cy;
	float intermediateLengthX[2] = {0};
	float intermediateLengthY[2] = {0};
	float length[2] = {0};
	cout << "������� ���������� ����� � ���� A(x, y) B(x, y) C(x, y), �� ���� � � � � x y" << endl;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	intermediateLengthX[0] = fabs(ax - cx);
	intermediateLengthX[1] = fabs(bx - cx);
	intermediateLengthY[0] = fabs(cy - ay);
	intermediateLengthY[0] = fabs(cy - by);
	length[1] = sqrt(pow(intermediateLengthX[1], 2) + pow(intermediateLengthY[1], 2));
	length[2] = sqrt(pow(intermediateLengthX[2], 2) + pow(intermediateLengthY[2], 2));
	cout << "����� ������� ����������: " << length[1] << " " << length[2] << endl;
	cout << "����� ����� �����" << length[1] + length[2] << endl;
	return 0;
}

int zadanieChetire() {
	int importingNumber;
	int a, c;
	cout << "������� 3-� ������� �����" << endl;
	cin >> importingNumber;
	a = importingNumber / 100;
	c = (importingNumber % 100) % 10;
	cout << pow((a-c), 3) << endl;
	return 0;
}

int zadanieTri() {
	int importingNumber;
	int a, c;
	cout << "�����" << endl;
	cin >> importingNumber;
	a = importingNumber / 100;
	c = (importingNumber % 100) % 10;
	cout << a << endl;
	return 0;
}

int zadacha() {
	int a, b;
	cout << "������� 2 �����" << endl;
	cin >> a >> b;
	if (a >= b){
		b *= 2;
	}
	cout << a << ' ' << b << endl;
	return 0;
}

int zadacha2() {
	int importingNumber;
	int a, b, c;
	cout << "������� �����" << endl;
	cin >> importingNumber;
	a = importingNumber / 100;
	b = (importingNumber % 100) / 10;
	c = (importingNumber % 100) % 10;
	if (importingNumber % 2 = 0){
		cout << a * b * c << endl;
	}
	else{
		cout << a + b + c << endl;
	}
	return 0;
}

int zadacha3() {
	int importingNumber;
	int a, b, c;
	cout << "������� �����" << endl;
	cin >> importingNumber;
	if (importingNumber > 0){
		cout << sqrt(importingNumber) << endl;
	}
	else{
		cout << pow(importingNumber, 2) << endl;
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int choose = 0;
	int i = 0;
	while (i == 0)
	{
		i = 0;
		choose = 0;
		cout << "�������� �������:" << endl;
		cout << "1 - ������� �� ������" << endl;
		cout << "2 - ������� � �������� 1" << endl;
		cout << "3 - ������� � �������� 2" << endl;
		cout << "4 - ������� � �������� 3" << endl;
		cout << "5 - ������� � �������� 4" << endl;
		cout << "6 - ������ ����" << endl;
		cout << "7 - ������ 2 ����" << endl;
		cout << "8 - ������ 3 ����" << endl;
		cout << "9 - ����� ����� �� ���������" << endl;
		cin >> choose;
		cout << endl;
		if (choose == 1) {
			zadanieSlide();
			system("pause");
			system("cls");
			
		}
		else if (choose == 2) {
			zadanieOdin();
			system("pause");
			system("cls");
		}
		else if (choose == 3) {
			zadanieDva();
			system("pause");
			system("cls");;
		}
		else if (choose == 4) {
			zadanieTri();
			system("pause");
			system("cls");
		}
		else if (choose == 5) {
			zadanieChetire();
			system("pause");
			system("cls");
		}
		else if (choose == 6) {
			zadacha();
			system("pause");
			system("cls");
		}
		else if (choose == 7) {
			zadacha2();
			system("pause");
			system("cls");
		}
		else if (choose == 9) {
			zadacha3();
			system("pause");
			system("cls");
		}
		else if (choose == 9) {
			i = 1;
			system("cls");
		}
		else {
			system("pause");
			system("cls");
		}
	}
	return 0;
}

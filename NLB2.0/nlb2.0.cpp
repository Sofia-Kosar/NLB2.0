// Lab_02.cpp
// < ����� ����� ³������� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 0.10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // ������� ��������
	double Pi = 4 * atan(1.); // ����� �
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������





	cout << "a = "; cin >> a;
	z1 = (sin((Pi / 2) + 3 * a)) / (1 - sin(3 * a + Pi));


	z2 = cos((5 * Pi / 4) + 3 * a / 2) / sin((5 * Pi / 4) + 3 * a / 2);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}

// Lab_02.cpp
// < Косар Софія Вікторівна >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 0.10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // вхідний параметр
	double Pi = 4 * atan(1.); // число пі
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу





	cout << "a = "; cin >> a;
	z1 = (sin((Pi / 2) + 3 * a)) / (1 - sin(3 * a + Pi));


	z2 = cos((5 * Pi / 4) + 3 * a / 2) / sin((5 * Pi / 4) + 3 * a / 2);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}

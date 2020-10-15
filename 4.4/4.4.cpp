#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите значение x: " << endl;
	cin >> x;
	double n;
	cout << "Введите значение n: " << endl;
	cin >> n;
	double f = 1;
	double a = 3;
	double b = 5;
	double c = 7;
	double e = 2 * n + 1;
	for (a; a > 0; a--)
	{
		f *= a;
	}
	for (b; b > 0; b--)
	{
		f *= b;
	}
	for (c; c > 0; c--)
	{
		f *= c;
	}
	for (e; e > 0; e--)
	{
		f *= e;

	}
	for (int i = 0; i < n; i++)
	{
		x = ((pow(x, 3)) / a) + ((pow(x, 5)) / b) - ((pow(x, 7)) / c) + (pow(-1, n) * pow(x, 2 * n + 1)) / (e) - sin(x);
	}
	cout << "Корни в заданном уравнении: " << x << endl;

	system("pause");
}
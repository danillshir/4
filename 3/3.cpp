#include <iostream>
#include <cmath>
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
	for (int i = 0; i < n; i++)
	{
		x = ((pow(x, 2)) / 2) + ((pow(x, 3)) / 3) - ((pow(x, 4)) / 4) + (pow(-1, n + 1) * pow(x, n)) / n - log(1 + x);
	}
	cout << "Корни в заданном уравнении: "<< x << endl;

	system("pause");
}
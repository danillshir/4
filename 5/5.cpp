
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a,b,c;
    cout << "Введите a=";
    cin >> a;
    cout << "Введите b=";
    cin >> b;
    cout << "Введите c=";
    cin >> c;
    if ((a * a + b * b) == (c * c))
    {
        cout << a << "^2+" << b << "^2=" << c << "^2" << endl;
    }
    else
    {
        cout << "Не верно" << endl;
    }

    system("pause");

}
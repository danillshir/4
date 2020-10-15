
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int v;
    cout << "Введите число ";
    cin >> v;
 
    for (int i = 1; i <= 100; i++)
    {
        if (v % i == 0)
            
        {
            cout << i << endl;
        }

    }
   
    system("pause");
    
}


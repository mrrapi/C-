#include <iostream>
#include <clocale>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string a;
    cout << "Введите любой текст:";
    cin >> a;
    while( !_kbhit() )
    {
        cout << a << endl;
    }
    system("pause");
    return 0;
}
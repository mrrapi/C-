#include "iostream" 
#include "clocale" 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, a, b, koll = 0;
    cout << ("Введите количество элементов n=");
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a" << i << " ";
        cin >> a;
        if (i > 0) {
            if (a * b < 0)
                koll++;
        }
        b = a;
    }
    cout << "Ответ = " << koll << endl;
    system("pause");
    return 0;
}
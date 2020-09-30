#include <iostream>
using namespace std;

int main()
{
    float x1, x2, x3, y1, y2, y3;

    cout << "Vvedite vershini" << endl;
    cout << "X1 = " << endl;
    cin >> x1;
    cout << "Y1 = " << endl;
    cin >> y1;
    cout << "X2 = " << endl;
    cin >> x2;
    cout << "Y2 = " << endl;
    cin >> y2;
    cout << "X3 = " << endl;
    cin >> x3;
    cout << "Y3 = " << endl;
    cin >> y3;

    if ((x1 <= 0 && x2 >= 0) || (x1 >= 0 && x2 <= 0) || (x3 <= 0 && x2 >= 0) || (x3 >= 0 && x2 <= 0) || (x3 <= 0 && x1 >= 0) || (x3 >= 0 && x1 <= 0))
    {
        if ((y1 <= 0 && y2 >= 0) || (y1 >= 0 && y2 <= 0) || (y3 <= 0 && y2 >= 0) || (y3 >= 0 && y2 <= 0) || (y3 <= 0 && y1 >= 0) || (y3 >= 0 && y1 <= 0))
        {
            cout << "Verno" << endl;
        }
        else  cout << "Ne verno" << endl;
    }
    else cout << "Ne vozmozhno" << endl;
    system("Pause");
    return 0;
}


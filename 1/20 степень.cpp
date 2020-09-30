#include <iostream>
using namespace std;
int main()
{
	int z;
	cout << "Vvedite chislo\n";
	cin >> z;
	z = z * z;
	z = z * z;
	int x = z;
	z = z * z;
	z = z * z;
	z = z * x;
	cout << "\n Result: " << z;
	system("Pause");
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int z;
	cout << "Vvedite chislo\n";
	cin >> z;
	int x = z;
	z = z * z;
	z = z * z;
	int q = z;
	z = z * z;
	z = z * q;
	z = z * x;
	cout << "\n Result: " << z;
	
	return 0;
}

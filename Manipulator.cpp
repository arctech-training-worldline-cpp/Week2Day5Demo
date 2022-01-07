#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main666()
{
	// int a = 100;
	// double b = 20.78234;
	// cout << hex << showbase;
	// cout << a << endl;

	// cout << setprecision(7);
	// cout << b;

	int x = 123;
	cout << "Octal value :  " << setbase(8) << showbase << x << endl;
	cout << "hex value :  " << setbase(16) << showbase << x << endl;

	cout << bitset<8>(5);

	int t = 13;
	t = t << 2;

	return 0;
}
// lab 11 t2 2019076.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;
int funct(int a, int b);
int main()
{
	int x, y,z;
	cout << "enter base: ";
		cin >> x;
		cout << "enter exponent: ";
		cin >> y;
		z=funct(x, y);
		cout << x << "^" << y << "=" << z;


}
int funct(int a, int b)
{
	int sum = 0;
	if (b <= 1)
		return a;
	else {
		return sum = a * funct(a, b - 1);
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

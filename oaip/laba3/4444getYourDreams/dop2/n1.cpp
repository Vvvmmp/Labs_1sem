#include <iostream>
#include "n2.hpp"

using namespace std;

int main()
{
	v5();
	float y, z;
	double n = 2, x = 1.3e-4, b = -0.12;
	
	z = 1 / (x-1) + sin(x) - sqrt(n);
	y = (exp(-b) + 1) / 2 * z;
	cout << "z=" << z << endl;
	cout << "y=" << y << endl;
	return 0;
}
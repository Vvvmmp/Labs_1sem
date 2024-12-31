#include <iostream>
#include "n2.hpp"

using namespace std;

int main()
{
	v6();
	float d, f;
	double i = -6, x = 4.5, z = 1.5e-6;

	d = tan(-x*i) / sqrt(x-z);
	f = sin(2*d) / d;
	cout << "d=" << d << endl;
	cout << "f=" << f << endl;
	return 0;
}
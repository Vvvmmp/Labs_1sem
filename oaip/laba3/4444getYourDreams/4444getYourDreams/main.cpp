#include <iostream>
#include "v13.hpp"

using namespace std;

int main()
{
	v13();
	float y, s;
	double z = 1.7, a = 4e-8, m = 3, n = 3;
	y = (z+ log(z)) / (exp(-3) +sqrt(a));
	s = (1+m*n)/(log(1+z));
	cout << "y=" << y << endl;
	cout << "s=" << s << endl;
	

	return 0;
}

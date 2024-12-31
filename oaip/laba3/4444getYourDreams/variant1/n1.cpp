#include <iostream>
#include "n2.hpp"

using namespace std;

int main()
{
	v4(); 
	float u, t;
	double a = 8.1, x = 2e-4, k = 4;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);

	cout << "u=" << u << endl;
	cout << "t=" << t << endl;
	return 0;
}
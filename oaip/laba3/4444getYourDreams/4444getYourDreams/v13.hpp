#include <iostream>

using namespace std;

static void v13()
{
	float y, t;
	double d = 0.5e-8, a = 1.5, c = -9;
	y = 0.5 / d + exp(a);
	t = (a * sqrt(abs(c - 1)) + c * d);
	cout << "y=" << y << endl;
	cout << "t=" << t << endl;
}
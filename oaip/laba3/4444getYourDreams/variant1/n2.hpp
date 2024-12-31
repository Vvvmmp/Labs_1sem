#include <iostream>

using namespace std;

static void v4()
{
	float p, q;
	double t = 6, x = 0.4e6, y = -1.2;
	p = 2.6 * t + cos(y / (3 * x + y));
	q = sin(t) / cos(t);
	cout << "p=" << p << endl;
	cout << "q=" << q << endl;
}
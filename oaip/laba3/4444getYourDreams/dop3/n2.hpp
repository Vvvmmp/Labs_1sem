#include <iostream>

using namespace std;

static void v6()
{
	float t, u, s;
	double y = 0.956, a = 5e-6, n = 4;
	t = 1 / sqrt(y) + 14*a ;
	u = (t+1) / (a+2);
	s = log((2*n/3) + exp(-n) / u);
	cout << "t=" << t << endl;
	cout << "u=" << u << endl;
	cout << "s=" << s << endl;
}
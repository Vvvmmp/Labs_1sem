#include <iostream>

using namespace std;

int getSum(int x, int y);
int getMul(int x, int y);

int main()
{
	int parm1 = 5;
	for (int i = 0; i < 5; i++)
	{
		int parm2 = parm1 + i;
		int result_getSum = getSum(parm1, parm2);
		cout << "i = " << i;
		cout << "getSum(" << parm1 << "," << parm2 << ") = " << result_getSum << endl;
	}
	int result_getMul = getMul(2, 3);
	cout << result_getMul << endl;

	return 0;
  }

int getMul(int x, int y)
{
	cout << "getMul(" << x << "," << y << ") = ";
	return x * y;
}
int getSum(int x, int y)
{
	cout << "getSum(" << x << "," << y << ") = ";
	return x + y;
}
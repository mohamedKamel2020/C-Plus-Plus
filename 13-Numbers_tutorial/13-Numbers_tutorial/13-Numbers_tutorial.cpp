#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	short s;
	int i;
	long l;
	float f;
	double d;
	s = 10;
	i = 100;
	l = 1000;
	f = 230.23;
	d = 230.230230;
	cout << "short  s :" << s << endl;
	cout << "int    i :" << i << endl;
	cout << "long   l :" << l << endl;
	cout << "float  f :" << f << endl;
	cout << "double d :" << d << endl;
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i)  :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow( d, 2) :" << pow(d, 2) << endl;
	return 0;
}
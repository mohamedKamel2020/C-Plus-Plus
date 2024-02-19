#include <iostream>
using namespace std;
int main()
{
	int var = 20;
	int* ip;
	ip = &var;
	cout << "Value of var variable:";
	cout << var<< "\n";
	cout << "Address stored in ip variable:";
	cout << ip << "\n";
	cout << "Value of *ip variable: ";
	cout << *ip<< "\n";
	return 0;
}
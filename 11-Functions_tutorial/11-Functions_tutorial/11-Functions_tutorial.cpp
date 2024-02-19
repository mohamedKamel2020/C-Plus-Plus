/*#include <iostream>
using namespace std;
int max(int num1, int num2);
int main()
{
		int a = 100;
		int b = 200;
		int ret;
		ret = max(a, b);
		cout << "Max Value is " << ret;
		return 0;
}
int max(int num1, int num2) {
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}
#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);

int main() {
	// local variable declaration:
	int a = 100;
	int b = 200;
	int ret;

	// calling a function to get max value.
	ret = max(a, b);
	cout << "Max value is : " << ret << endl;

	return 0;
}

// function returning the max between two numbers
int max(int num1, int num2) {
	// local variable declaration
	int result;

	if (num1 > num2) {
		result = num1;
	}
	else {
		result = num2;
	}
	return result;
}
#include <iostream>
using namespace std;

// function declaration
void swap(int x, int y);

int main() {
	// local variable declaration:
	int a = 100;
	int b = 200;

	cout << "Before swap, value of a :" << a ;
	cout << "Before swap, value of b :" << b ;

	// calling a function to swap the values.
	swap(a, b);

	cout << "After swap, value of a :" << a << endl;
	cout << "After swap, value of b :" << b << endl;

	return 0;
}
void swap(int x, int y) {
	int temp;

	temp = x; 
	x = y;   
	y = temp; 

	return;
}*/
#include <iostream>
using namespace std;

int sum(int a, int b = 20) {
	int result;
	result = a + b;

	return (result);
}
using namespace std;
int main() {
	// local variable declaration:
	int a = 100;
	int b = 200;
	int result;

	// calling a function to add the values.
	result = sum(a, b);
	cout << "Total value is :" << result ;

	// calling a function again as follows.
	result = sum(a);
	cout << "Total value is :" << result ;

	return 0;
}


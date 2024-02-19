/*#include <iostream>
#include <cstring>
#include <string>
#define EXAMPLE_MACRO_NAME
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main()
{
    #define EXAMPLE_MACRO_NAME
	char str1[20] = "hello";
	char str2[10] = "world";
	char str3[10];
	int len;
	char greeting[6] = { 'H','e','l','l','o','\0' };
	cout << "Greeting message:";
	cout << greeting;
    #define EXAMPLE_MACRO_NAME
	strcpy(str3, str1);
	cout << "strcpy(str3,str1):" << str3;
    #define EXAMPLE_MACRO_NAME
	strcat(str1,str2);
	cout << "strcat(str1,str2):" << str1;
    #define EXAMPLE_MACRO_NAME
	len = strlen(str1);
	cout << "strlen(str1):" << len;
	return 0;
}*/
#include <iostream>
#include <string>

using namespace std;

int main() {

	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int  len;

	// copy str1 into str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;

	// concatenates str1 and str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;

	// total length of str3 after concatenation
	len = str3.size();
	cout << "str3.size() :  " << len << endl;

	return 0;
}
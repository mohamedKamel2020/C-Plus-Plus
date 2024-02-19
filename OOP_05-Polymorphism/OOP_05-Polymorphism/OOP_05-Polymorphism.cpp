// OOP_05-Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Shape {
protected:
	int width, height;

public:
	Shape(int a = 0,int b=0) {
		width = a;
		height = b;
	}
	virtual int area() {
		cout << "Parent class area :" << endl;
		return 0;
	}
};
class Rectangle :public Shape {
public:
	Rectangle(int a=0,int b=0):Shape(a,b){}
	int area() {
		cout << "Rectangle class area :" << endl;
		return (width * height);

	}

};
class Triangle : public Shape {
public:
	Triangle(int a = 0, int b = 0) :Shape(a, b) { }

	int area() {
		cout << "Triangle class area :" << endl;
		return (width * height / 2);
	}
};

int main()
{
	Shape* shape;
	Rectangle rec(10, 7);
	Triangle  tri(10, 5);
	shape = &rec;
	shape->area();

	shape = &tri;
	shape->area();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

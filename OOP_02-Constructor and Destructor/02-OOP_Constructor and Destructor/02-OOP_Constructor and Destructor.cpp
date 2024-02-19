//#include <iostream>
//using namespace std;
//class Line {
//public:
//    void setLenght(double len);
//    double getLength(void);
//    Line();
//    ~Line();
//private:
//    double length;
//
//};
//Line::Line(void) {
//    cout << "Object is being created"<<endl;
//}
//Line::~Line(void) {
//    cout << "Object is being deleted" << endl;
//}
//void Line::setLenght(double len) {
//    length = len;
//}
//double Line::getLength(void) {
//    return length;
//}
//int main()
//{
//    Line line;
//    line.setLenght(6.0);
//    cout << "Length of line" << line.getLength() << endl;
//    return 0;
//}
#include <iostream>

using namespace std;

class Box {
    double width;

public:
    friend void printWidth(Box box);
    void setWidth(double wid);
};

// Member function definition
void Box::setWidth(double wid) {
    width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth(Box box) {
    /* Because printWidth() is a friend of Box, it can
    directly access any member of this class */
    cout << "Width of box : " << box.width << endl;
}

// Main function for the program
int main() {
    Box box;

    // set box width without member function
    box.setWidth(10.0);

    // Use friend function to print the wdith.
    printWidth(box);

    return 0;
}
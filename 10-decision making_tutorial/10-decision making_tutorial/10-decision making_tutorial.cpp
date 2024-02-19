#include <iostream>
using namespace std;
int main()
{
    int num;
    printf("Input First Number =");
    cin >> num;
    if (num < 20){
        cout << "Number is less 20\n";
    }
    else
    {
        cout << "Number is not less than 20\n";
    }
    cout << "Value of Number is :-" << num;
    char grade = 'D';
    switch (grade)
    {
    case'A':
            cout << "Exellent";
            break;
    case'B':
        cout << "Well done";
        break;
    case'D':
        cout << "You passed";
        break;
    case'F':
        cout << "Better try again";
        break;
    default:
        cout << "Invalid grade";
    }
    cout << "Your grade is :-\t" << grade;
    return 0;
}
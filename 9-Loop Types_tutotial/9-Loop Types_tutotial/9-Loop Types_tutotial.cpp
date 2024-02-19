#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Input Num =";
    cin >> Num;
    while (Num<20)
    {
        cout << "Value of Num" << Num << endl;
        Num++;
    }
    cout << "For Loop";

    for (int i = 0; i < Num; i++)
    {
        cout << "Value of i" << i << endl;
    }
    int Num2;
    cout << "Input Num 2 =";
    cin >> Num2;
    LOOP:do {
        if (Num2==11) {
            Num2++;
            goto LOOP;

        }
        cout << "value of a: " << Num2 << endl;
        Num2++;
    } while (Num2<20);
    for (;;)
    {
        printf("mohamed kamel mohamed\n");
    }
    return 0;

}
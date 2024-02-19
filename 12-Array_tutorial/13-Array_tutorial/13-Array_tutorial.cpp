#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
int main()
{
	int n[10];
	for (int i = 0; i < 10;i++) {
		n[i] = i + 100;
	}
	cout << "Element" << setw(13) << "Value" << endl;
	for (int j = 0; j < 10; j++) {
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}
	cout << "Two-Dimensional Array \n";
	int a[5][2] = { {0,0},{1,2},{2,4},{3,6},{4,8} };
	for  (int i = 0;i<5 ;i++ )
	{
		for (int j = 0; j < 2;j++) {
			cout << "a[" << i << "][" << j << "]";
			cout << a[i][j] << endl;
		}

	}
	return 0;
}
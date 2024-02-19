//#include<stdio.h>
////Variable declaration
//extern int a, b;
//extern int c;
//extern float f;
//
//int main() {
//	/* variable definition: */
//	int a, b;
//	int c;
//	float f;
//
//	/* actual initialization */
//	a = 10;
//	b = 20;
//
//	c = a + b;
//	printf("value of c : %d \n", c);
//	f = 70.0 / 3.0;
//	printf("value of f : %f \n", f);
//
//	return 0;
//
//}
//

//#include <stdio.h>
//int main() {
//	int password = 123;
//	int users;
//
//	scanf_s("%d", &users);
//
//	if (password == users) {
//		printf("the password is correct");
//	}
//	else
//	{
//		printf("the password is incorreect");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	
//	int x;
//
//
//	scanf_s("%d", &x);
//
//
//	int reslut = 0;
//	for (int i = x; i != 0;i--) {
//		reslut = reslut * i;
//		printf("the answer is: %d ", reslut);
//	}
//	printf("the answer is: %d ", reslut);
//	return 0;
//
//}
//#include<stdio.h>
//int main() {
//	printf("Please choose operation:\n");
//	printf("For save curame: 1\n");
//	printf("For show curame count: 2\n");
//	int operation = 0;
//	int curameNumber = 0;
//	int curameCount = 0;
//	do
//	{
//		scanf_s("%d", &operation);
//		if (operation == 1)
//		{
//			printf("Enter the curame number:\n");
//			scanf_s("%d", &curameCount);
//			curameNumber += curameCount;
//		}
//		else if (operation == 2)
//		{
//			printf("the curame count = %d\n", curameNumber);
//		}
//		else
//		{
//			printf("please insert valid choice");
//		}
//		printf("Please choose operation:\n");
//		printf("For save curame: 1\n");
//		printf("For show curame count: 2\n");
//	} while (operation == 1 || operation == 2);
//	return 0;
//}
/*void ShowInvoiceDetails(int id,char name[20],float value,float taxValue) {
	printf("the invoice: %d \n", id);
	printf("the invoice name: %s\n", name);
	printf("the invoice value: %d \n", value);
	printf("the value of the tax is:%f\n", taxValue);
}
void main() {
	printf("enter invoice details:\n");
	int invoiceID = 0;
	char invoicePartyName[20];
	int invoiceValue = 0;
	printf("enter invoice id: ");
	scanf_s("%d",&invoiceID);
	printf("enter invoice party name: ");
	scanf("%s", invoicePartyName);
	printf("enter invoice value: ");
	scanf_s("%d", &invoiceValue);
	float invoiceTaxValue = 0;
	ShowInvoiceDetails(invoiceID,invoicePartyName,invoiceValue,invoiceTaxValue);
	if (invoiceValue >= 100) {
		invoiceTaxValue = invoiceValue / 3;
	}
	ShowInvoiceDetails(invoiceID, invoicePartyName, invoiceValue, invoiceTaxValue);
}*/
/*#define _CRT_SECURE_NO_WARNINGS
* 
struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
}book;
int main() {
	struct Books Book1;
	struct Books Book2;
	strcpy(Book1.title, "c programming");
	strcpy(Book1.author, "mohamed");
	strcpy(Book1.subject, "c program");
	Book1.book_id = 6495407;
	strcpy(Book2.title, "jave");
	strcpy(Book2.author, "mo");
	strcpy(Book2.subject, "js");
	Book2.book_id = 6495200;
	printf("Book 1 title:%s\n", Book1.title);
	printf("Book 1 author:%s\n", Book1.author);
	printf("Book 1 subject:%s\n", Book1.subject);
	printf("Book 1 book_id:%d\n", Book1.book_id);
	printf("Book 2 title:%s\n", Book2.title);
	printf("Book 2 author:%s\n", Book2.author);
	printf("Book 2 subject:%s\n", Book2.subject);
	printf("Book 2 book_id:%d\n", Book2.book_id);

	return 0;

};*/

/*union Data {
	int i;
	float f;
	char str[20];
};
int main() {
	union Data data;
	printf("Memory size occupied by data : %d\n", sizeof(data));
	return 0;
}*/
/*struct {
	unsigned int wv;
	unsigned int hv;
}status1;
struct {
	unsigned int wv:1;
	unsigned int hv:1;
}status2;
int main() {
	printf("Memory size occupied by 1:%d\n", sizeof(status1));
	printf("Memory size occupied by 2:%d\n", sizeof(status2));
}*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
/*void prime() {
	int s = 0, i, x;
	scanf();
	for (x = 120; x < 150; x++);
	for (i = 1; i < x; i++) {
		if (x % i == 0)
			break;
		else {
			s = s * 1;
		}
	}
}
	int main(){
		int x, i, s = 0;
     	
	}*/
/*typedef struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
}Book;
int main(){
	Book book;
	strcpy(book.title, "C Programming");
	strcpy(book.author, "mohamed");
	strcpy(book.subject, "c program");
	book.book_id = 6495407;
	printf("Book  title:%s\n", book.title);
	printf("Book  author:%s\n", book.author);
	printf("Book  subject:%s\n", book.subject);
	printf("Book  book_id:%d\n", book.book_id);
	return 0;
}*/
/*int main() {
	printf("File : %s\n", __FILE__);
	printf("Date : %s\n", __DATE__);
	printf("Time : %s\n", __TIME__);
	printf("Line : %s\n", __LINE__);
	return 0;
}*/
/*int main()
{
	int Number;
	scanf("%d",&Number);
	for (int i=2;i<Number;i++)
	{
		unsigned char isPrime = '1';
		for (int j = 2; j < i;j++) 
		{
			if ((i % j) == 0) {
				isPrime = '0';
			}
		}
		if (isPrime == '1')
			printf("%d\n", i);
	}
}*/
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//int main()
//{
//	char character;
//	char word[100];
//	char sentence[100];
//	scanf("%c", &character);
//	scanf("%s", &word);
//	scanf("\n");
//	scanf("%[^\n]%*c", &sentence);
//	printf("%c\n", character);
//	printf("%s\n", word);
//	printf("%s\n", sentence);
//
//
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main()
//{
//	int Number1, Number2;
//	int s, d;
//	scanf("%d %d", &Number1, &Number2);
//	s = Number1 + Number2;
//	d = Number1 - Number2;
//	printf("%d %d \n", s, d);
//	float Number3, Number4;
//	scanf("%f %f", &Number3, &Number4);
//	float x, z;
//	x = Number3 + Number4;
//	z = Number3 - Number4;
//	printf("%f %f \n", x, z);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int LA[] = { 1,3,5,7,9 };
	int item = 10, k = 3, n = 5;
	int i = 0, j = n;
	printf("The array elements are:\n");
	for (i = 0; i < n;i++)
	{
		printf("LA[%d]=%d\n", i, LA[i]);
	}
	n = n + 1;

	while (j >= k)
	{
		LA[j+1] = LA[j];
		j = j - 1;
	}
	LA[k] = item;
	printf("after insertion:\n");
	for (i = 0; i < n; i++)
	{
		printf("LA[%d]=%d\n",i,LA[i]);
	}
}




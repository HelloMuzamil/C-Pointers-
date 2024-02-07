#include<iostream>
using namespace std;
int main( )
{
	int x=10;
//	int y=40
	int *ptr=&x;
	//int *ptr=&y; we cant do this 
//	cout<<"Adress of x is   "<<x<<" \n";
	cout<<"Adress of x is   "<<ptr<<" \n";
	cout<<"Value of x is  "<<*ptr<<" \n";	
	*ptr=20;     //we cant do this ptr =20;because ptr always store addres not value instread we do this *ptr=20
	cout<<"Value of Bucket of x is  "<<x<<" \n";   //ponters value 
	cout<<"New Value of x is "<<*ptr<<" \n";
		cout<<"adress of x is "<<ptr<<" \n";
}
#include<iostream>
using namespace std;
int main(){

	int a =100;
	int *b= &a;
	int **c= &b;
	
	cout<<"Value of variable is  "<<a<<"  "<<&a<<endl;
	cout<<"Address of pointer a  is "<<b<<"Adress is  "<<&b <<endl;
	cout<<"Adress of pointer b is   "<<c<<"    "<<&c  <<endl;//when you use single staric it means it stores the adress of b
	
	
}
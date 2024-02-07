#include<iostream>
using namespace std;
struct stu
{
	int roll;
	string name;
	int marks;
};
int main( )
{
	int choice;
cout<<"How Many student record you want to enter: ";
cin>>choice;
struct stu s[choice] ;	
for(int i=0;i<choice;i++){
 
cout<<"Please enter Student roll no: ";
cin>>s[i].roll;
cout<<"Please Enter the name of student:  ";
cin>>s[i].name;
cout<<"Please  Enter the marks of students: ";
cin>>s[i].marks;
	
}

for(int i=0;i<choice;i++){
 
cout<<"Student "<<" \n";
cout<<s[i].roll;
cout<<"Name  "<<" \n";
cout<<s[i].name;
cout<<"Roll num: "<<"\n";
cout<<s[i].marks;
	
}  










 }
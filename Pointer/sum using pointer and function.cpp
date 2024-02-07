#include<iostream>
using namespace std;

int add( int* num1,  int* num2) {
    return (*num1) + (*num2);
}

int main() {
    int a = 5;
    int b = 7;
    int result = add(&a, &b);
    cout << "Sum of " << a << " and " << b << " is: " << result << endl;

    return 0;
}

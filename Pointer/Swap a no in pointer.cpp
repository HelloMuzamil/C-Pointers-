#include<iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout<<a,b;
}

int main() {
    int d= 10, e = 20;
    cout << "Before swapping num1=" << d << " num2=" << e << endl;
    swap(d, e);
    cout << "After swapping num1=" << d << " num2=" << e << endl;
    return 0;
}

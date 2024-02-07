#include <iostream>
using namespace std;

int* findMaxValue(int arr[], int size) {
    int* maxPtr = arr; 
    for (int i = 1; i < size; ++i) {    
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
	  }
    return maxPtr;
}

int main() {
    const int size = 5;
    int arr[size] = {110, 45, 102, 101, 200};


    int* maxPtr = findMaxValue(arr, size);
        cout << "Maximum value: " << *maxPtr << " at address: " << maxPtr <<endl;
                     

    return 0;}

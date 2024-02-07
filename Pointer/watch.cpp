#include <iostream>
using namespace std;
void findMaxValueAndIndex(int arr[], int size, int*& maxPtr, int& maxIndex) {
    if (size <= 0) {
        maxPtr = nullptr;
        maxIndex = -1;
        return;
    }

    maxPtr = &arr[0]; 
    maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
            maxIndex = i;
        }
    }
}
int main() {
    const int size = 5;
    int arr[size] = {23, 45, 12, 67, 89};
    int* maxPtr = nullptr;
    int maxIndex = -1;
    findMaxValueAndIndex(arr, size, maxPtr, maxIndex);

    if (maxPtr != nullptr) {
        cout << "Maximum value: " << *maxPtr << " at index: " << maxIndex << endl;
    } else {
        cout << "Invalid array size." << endl;
    }

    return 0;
}

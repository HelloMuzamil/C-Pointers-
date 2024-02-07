#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int age;
    string university;
};

int main() {
   
    Student students[2];

    
    for (int i = 0; i < 2; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cin.ignore(); 
        cout << "University: ";
        getline(cin, students[i].university);
    }

    cout << "\nStudent Information:" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << "Student " << i + 1 << " - Name: " << students[i].name
             << ", Age: " << students[i].age
             << ", University: " << students[i].university << endl;
    }

    return 0;
}

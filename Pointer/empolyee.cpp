#include <iostream>
#include <iomanip> 
using namespace std;
struct Employee {
    string name;
    int employeeID;
    double salary;
};

int main() {
  
    Employee emp1, emp2;
    cout << "Enter details for the first employee:" << std::endl;
    cout << "Name: ";
    getline(cin >> std::ws, emp1.name); 
    cout << "Employee ID: ";
    cin >> emp1.employeeID;
    cout << "Salary: ";
    cin >> emp1.salary;
    cout << "\nEnter details for the second employee:" << std::endl;
    cout << "Name: ";
    getline(cin >> std::ws, emp2.name); 
    cout << "Employee ID: ";
    cin >> emp2.employeeID;
    cout << "Salary: ";
    cin >> emp2.salary;
    cout << "\nDetails for the first employee:" << std::endl;
    cout << "Name: " << emp1.name << std::endl;
    cout << "Employee ID: " << emp1.employeeID << std::endl;
    cout << "Salary: $" << fixed << setprecision(2) << emp1.salary << endl;

    cout << "\nDetails for the second employee:" << std::endl;
    cout << "Name: " << emp2.name << std::endl;
    cout << "Employee ID: " << emp2.employeeID << std::endl;
    cout << "Salary: $" << std::fixed << std::setprecision(2) << emp2.salary << std::endl;

    double averageSalary = (emp1.salary + emp2.salary) / 2.0;
    cout << "\nAverage Salary: $" << std::fixed << std::setprecision(2) << averageSalary << std::endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;
struct CricketPlayer {
    string name;
    int age;
    string team;
};

int main() {
    
    CricketPlayer players[4];

    
    for (int i = 0; i < 4; ++i) {
        cout << "Enter details for cricket player " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, players[i].name);
        cout << "Age: ";
        cin >> players[i].age;
        cin.ignore(); // Consume the newline character
        cout << "Team: ";
        getline(cin, players[i].team);
    }

    
    cout << "\nCricket Team Information:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Cricket Player " << i + 1 << " - Name: " << players[i].name
             << ", Age: " << players[i].age
             << ", Team: " << players[i].team << endl;
    }

    return 0;
}

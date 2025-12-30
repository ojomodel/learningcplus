#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade";
    cin >> grade;
    switch (grade) {
        case 'A':
            cout << "^7";
            break;
        default:
            cout << "no";
            }
    return 0;
}
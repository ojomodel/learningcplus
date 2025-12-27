#include <iostream>
using namespace std;
int main() {
    
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18)
    {
        cout << "Welcome to the site!";

    }
    else {
        cout << "You are not permitted";
    }

    return 0;
}
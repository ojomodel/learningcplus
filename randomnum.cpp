#include <iostream>
#include <string>
using namespace std;

void happyBirthday(string name);  // prototype (declaration)

int main() {
    string name = "Bro";
    happyBirthday(name);
    return 0;
}

void happyBirthday(string name) { // definition (the real function)
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday dear " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
}

// It’s not repeating the function. The top line is just a “heads up” to the compiler:
// “this function exists later.” The real code is only the bottom one.
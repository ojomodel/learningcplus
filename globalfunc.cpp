#include <iostream>
using namespace std;

int mynum = 3;
void printmynum();
int main() {

    int mynum = 1;
    printmynum();
    cout << mynum << '\n';
    cout << ::mynum << '\n'; // if i want to get the global variable(out side of functions i add :: infront of the variable)

    return 0;
}

void printmynum() {
    int mynum = 2;
    cout << mynum << '\n';
}
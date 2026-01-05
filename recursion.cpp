#include <iostream>
using namespace std;
void walk(int steps) {
    if (steps > 0 ) {
        cout << "You took a step" << '\n';
        walk(steps-1);
    }
}
int factorial(int num) {
    if (num <=1) return 1;
    return num * factorial(num -1);
    
    
}
//uses more memory and time 
int main() {

    //walk(100);
    int total = factorial(6);
    cout << total;
    

    return 0;
}

// take a number multiply it times prev num -1 like 6 * (6-1) * ((6-1) - 1)
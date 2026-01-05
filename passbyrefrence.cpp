#include <iostream>
using namespace std;
void swap(string &x, string &y) { // just add & when passing by refrence 
    string temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << "<- swap func"<< '\n';
    cout << y << "<- swap func"<< '\n'; 
}
int main() {

    string x = "coke";
    string y = "fanta";
    swap (x, y);
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';

    return 0;
}
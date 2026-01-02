#include <iostream>
using namespace std;

double square(double length); // so instead void replace void with the data type of the value you are returning

int main() {

    double length = 5.0;
    double area = square(length);
    cout << "area" << area << '\n';
    // this is just basic assign when return is in a function like in python assign a function to a variable and print it 

    return 0;
}

double square(double length) {
    return length * length;
}
#include <iostream>

int main() {
    //make a variable unchangeable make it a constant 
    const double PI = 31.14159;
    double radius = 10;
    double circumference = 2 *PI* radius;
    std::cout << circumference << "cm";
    
    return 0;
}
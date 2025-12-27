#include <iostream>

int main() {
    //this is just integer
    int x; //making a variable
    x = 67; //assign the variable
    std::cout << x << '\n';
    
    //you could also assign variable instantly like python 
    int y = 67;
    std::cout << y << '\n';

    int sum = x + y;
    std::cout << sum << '\n';
    //double is just a float
    //single character
    char grade = 'A';
    char initial = 'O';
    std::cout << grade << '\n';

    //boolean 
    bool student = true;
    bool power = false;

    //string
    std::string name = "oluwaseun";
    std::cout << name << '\n';
    
    //display name 
    std::cout << "Hello " << name << '\n';
    
    
    
    return 0;
}
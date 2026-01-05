#include <iostream>
using namespace std;

int main() {
    // a special vlaue that means something has no value
    // nullptr = keyword that represents a null pointer literal
    // helpful when determining if an address was succesfully assigned to a pointer 

    int *pointer =  nullptr;
    int x = 123;
    pointer = &x; // point to an existing variable 
    

    if (pointer == nullptr) { // check if it was assigned
        cout << "Address was not assigned";
    }
    else { 
        cout << "Address was assigned\n";
        cout << *pointer;
    }
    return 0;
}
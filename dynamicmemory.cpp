#include <iostream>
using namespace std;

int main() {
    //memeory that is allocated after the program is already compiled and running 
    // use the new operator to allocate memory in teh heap rather than the stack
    // useful when we dont know how much memory we will need, mostly userinput 

    int *pnum = NULL;
    pnum = new int; // create a new vlaue
    *pnum = 21; // use * when storing a value  
    cout << "address: " << pnum << '\n';
    cout << "value: " << *pnum << '\n';
    delete pnum;

    char *pgrades = NULL; // PGRADES is the array
    int size;
    cout << "How many grade to enter in: "; cin >> size;
    pgrades = new char[size];
    for ( int i = 0; i < size;i++) {
        cout << "enter grades#" << i + 1 << ':';
        cin >> pgrades[i]; 
    }
    for (int i = 0; i < size; i++) {
        cout << pgrades[i] << ' ';
    }
    delete[] pgrades;

    return 0;
}
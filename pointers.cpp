#include <iostream>
using namespace std;

int main() {

    // a variable that stores memory address of another variable
    string name = "bro";
    int age = 20;
    string *pname = &name;
    int *page = &age;
    cout << *pname << '\n'; // to access the value of memory address
    cout << pname << '\n'; // the memory address itself
    cout << *page << '\n';
    cout << page << '\n';
    string freepizza[5] = {"pizza1","pizza1", "pizza1", "pizza1", "pizza1"};
    string *pfreepizza = freepizza; // no need to put & in arrays
    cout << freepizza << '\n';
    cout << *pfreepizza;
    return 0;
}
#include <iostream>
using namespace std;
using std::string;

int main() {

    int tall;
    char symbol;
    cout << "How tall: "; cin >> tall;
    cout << "symbol; "; cin >> symbol;

    for (int i = 0; i < tall; i++) {
        cout << string(i, symbol) << '\n';
   
        
    }

    return 0;
}
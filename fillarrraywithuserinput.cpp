#include <iostream>
#include <iterator>
using namespace std;

int main() {

    string foods[5];
    int sizn = size(foods);
    for ( int i = 0; i < sizn; i++) {
        cout << "Enter a food you like #" << i + 1 << ": ";
        getline(cin, foods[i]);
    }
    cout << "you like the following food:\n";
    for (string food:foods) {
        cout << food << '\n';
    }

    return 0;
}
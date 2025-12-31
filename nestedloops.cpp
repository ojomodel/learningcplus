#include <iostream>
using namespace std;

int main() {
    int c, r;
    char s;

    cout << "How many rows? ";    cin >> r;
    cout << "How many columns? "; cin >> c;
    cout << "What symbol? ";      cin >> s;

    for (int i = 0; i < r; i++) {          // rows
        for (int j = 0; j < c; j++) {      // columns
            cout << s;
        }
        cout << '\n';                      // new line after each row
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int size = 100;
    string foods[100];
    fill(foods, foods + (size/2), "pizza");
    fill(foods + (size/2), foods + size, "Hamburgers");
    for (string food : foods) {
        cout << food << '\n';
    }

    return 0;
}
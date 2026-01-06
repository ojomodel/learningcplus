#include <iostream>
using namespace std;
class pizza {
    public:
        string topping1;
    pizza (string topping1) {
        this->topping1 = topping1;
    }
};
int main() {
    pizza pizza1("peproni");
    cout << pizza1.topping1 << '\n';

    return 0;
}
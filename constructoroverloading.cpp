#include <iostream>
using namespace std;
class pizza {
    public:
        string topping1;
        string topping2;

        pizza ( ) {}
        pizza (string topping1) {
        this->topping1 = topping1;
        }
        pizza (string topping1, string topping) {
        this->topping1 = topping1;
        this->topping2 = topping2;
        }
};
int main() {
    pizza pizza1("peproni");
    cout << pizza1.topping1 << '\n';

    return 0;
}
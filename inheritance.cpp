#include <iostream>
using namespace std;
class animal { 
    public:
        bool alive = true; // attribute
    void eat () { // method
        cout << "This animal is eating\n";
    }
}; // parent class
class Dog : public animal {
    public:
    void bark () {
        cout << "Woof\n";
    }
};
class Cat : public animal {
    public:
    void meow () {
        cout << "The cat goes meow\n";
    }
};
int main() {
    Dog dog;
    Cat cat;
    dog.eat();
    dog.bark();
    cat.eat();
    cat.meow();


    return 0;
}
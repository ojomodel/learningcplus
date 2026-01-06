#include <iostream>
using namespace std;
class Human {
    public:
        string name = "rick";
        string occupation;
        int age;
        
        void eat () { cout << "This person is eating" << '\n'; } // these are methods
        void drink () { cout << "This person is drinking" << '\n'; }
        void sleep () { cout << "This person is sleeping" << '\n'; }
};

int main() {
    // object oriented programming
    Human human1; // object is human 1
    Human human2;
    human1.occupation = "cs";
    human1.age = 70;
 
    cout << human1.name << '\n';
    cout << human2.name << '\n';
    cout << human1.occupation << '\n';

    human1.eat();
    human1.sleep();
    human1.drink();
    

    return 0;
}
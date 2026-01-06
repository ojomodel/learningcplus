#include <iostream>
using namespace std;
class student {
    public:
        string name;
        int age;
        double gpa;
    student(string x, int y, double gpa){
        this->name = x; // use this-> if the constructor parameter and attributes have same name if not, you can remove the this-> 
        age = y;
        this->gpa = gpa;
    }
};
int main() {
    // special method within a class when an object is instatiated
    student uofh("james", 19, 3.7);
    cout << uofh.name << '\n';
    cout << uofh.age << '\n';
    cout << uofh.gpa << '\n';
    return 0;
}
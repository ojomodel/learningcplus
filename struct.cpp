#include <iostream>
using namespace std;
struct student { // variables under this are members, memebers can be accessed with .
    string name;
    double gpa;
    bool enrolled = true;  // you can set a default value 
};
int main() {
    //structure that group related variables under one name
    student student1;
    student student2;
    student1.name = "spongebob";
    student1.gpa = 3.2;

    student2.name = "Patrick";
    student2.gpa = 1.2;
    student2.enrolled = false;

    cout << student1.name << '\n';
    cout << student1.gpa << '\n';

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';

    return 0;
}
#include <iostream>
using namespace std;
struct cars { 
    string model;
    int year;
    string color;
};
void printcar(cars &car){
    cout << car.model << '\n';
    cout << car.year << '\n';
    cout << car.color << '\n';
    
}
void paintcar(cars &car, string color) {
    car.color = color;
}
int main() {
    cars car1;
    cars car2;
    car1.model = "tesla";
    car1.year = 2020;
    car1.color = "red";
    car2.model = "bmw";
    car2.year = 2019;
    car2.color = "black";
    paintcar(car1, "silver");
    printcar(car1);
    
    return 0;
}
#include <iostream>
using namespace std;
class Shape {
    public: 
        double area;
        double volume;
};
class Cube : public Shape {
    public: 
        double side;
    Cube(double x) {
        side = x;
        area = x * x * 6;
        volume = x * x * x;
    }
};
class Sphere : public Shape {
    public: 
        double radius;
    Sphere(double y) {
        radius = y;
        area = 4 * 3.14159 * ( y * y);
        volume = (4/3.0) * 3.14159 * ( radius *  radius *  radius );
    }
};
int main() {
    Cube cubc(10);
    Sphere Sphers(10);
    cout << "area " << cubc.area << '\n';
    cout << "volume " << cubc.volume << '\n';
    cout << "area " << Sphers.area << '\n';
    cout << "volume " << Sphers.volume << '\n';
    

    return 0;
}
#include <iostream>
using namespace std;

enum Day { sunday = 0, monday = 1, tuesday =2 , wed =3, thur =4, friday = 5, sat = 6};

int main() {
    Day today = sunday;
    
    switch (today)
    {
    case 0:
        cout << "it is sunday\n";
        break;
    case 1:
        cout << "It is monday\n";
        break;
    
    default:
        break;
    }
    

    return 0;
}
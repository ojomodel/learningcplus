#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;
using std::getline;
using credits_t = double;

namespace empire {
    const double TAX_RATE = 0.10;
}
int main() {
    cout << "--- GALACTIC BORDER CONTROL SYSTEM ---" << '\n';
    credits_t distance ;
    credits_t basecost;
    string name;
    credits_t total_cost;
    cout << "Enter Pilot Name: ";
    cin >> name;
    credits_t x;
    cout << "Enter ship x coordinate: ";
    cin >> x;

    credits_t y;
    cout <<"Enter ship y coordinate: ";
    cin >> y;


    x = pow(x, 2);
    y = pow(y, 2);
    distance = sqrt(x + y);
    basecost = c * 10;
    cout << "--- CALCULATING FEES ---" << '\n';
    cout << "Pilot: " << name << " Distance traveled: " << c
     << " lightyears Base fee: " << basecost << " credits" << '\n';

    if(c > 50){
        cout << "⚠️ Long Distance Surcharge Applied!"<<'\n';
        basecost += 100;
    }
    else {
        cout << "Processing Surcharges.. (No surchange applied because distance is not > 50)";
    }
    total_cost = basecost+( basecost* empire::TAX_RATE);
    
    cout << "Tax (10%): " << c << " Credits" << " TOTAL COST: " << total_cost <<
    " Credits Integer format: " << int(total_cost);




    return 0;
}
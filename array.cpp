#include <iostream>
using namespace std;

double getTotal(double prices[], int size);

int main() {
    double prices[] = {6.7, 4.1, 2.1, 6.5};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);
    cout << total;
    //string cars[] = {"corr", "bmw", "tesla"};
   // cout << car[0];
    //string cars[3]; // can make an array and assign values later but have to put size of array
   // string cars[0] = "bmw";
   // string cars[1] = "tesla";
   // string cars[2] = "merc";

    //for(string car : cars ) { // car is a name for the each element basically also this is a for each loop
   //     cout << car << '\n';
   // }

    return 0;
}
double getTotal(double prices[], int size){
    double total = 0;
    for( int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
    
}
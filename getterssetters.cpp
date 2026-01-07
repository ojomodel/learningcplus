#include <iostream>
using namespace std;
class Stove{
    private:
        int temp = 0;
    public:
        int gettemp () {
            return temp;
        }
        void settemp (int x) {
            if (x < 0) { temp = 0; }
            else if(x >= 10) { temp = 10; }
            else {temp = x; }
            
        }
 };
int main() {
 // abstraction = hiding data from code outside of a class
 // getter = function that gets the private attribute but read only
 // setter - fucntion that makes a private attribute writeable
    Stove burner;
    burner.settemp(1000000);
    cout << burner.gettemp();

    return 0;
}
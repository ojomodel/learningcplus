#include <iostream>
 
//name space allow 2 or more values to have the same name 

namespace first {
    int x = 67;
}
namespace second {
    int x = 41;
}
int main() {
    using namespace std; //if we use this we dont need to add std:: infront of every output or string naming 
    int x  = 1;
    cout << first::x;

    return 0;
}
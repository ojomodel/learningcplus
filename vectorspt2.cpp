#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    v1.insert(v1.begin(), 5); // beginning and what you want to replace it with 
    //v1.insert(v1.begin() + 1, 7); 
    // beginng is basically v1[0] you can add a number to like move the beginning index
    // it ignores the first begin() method use tho so be careful
    v1.erase(v1.begin()); 
    cout << v1[0] << endl;

    return 0;
}
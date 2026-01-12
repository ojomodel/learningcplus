#include <iostream>
#include <vector>
using namespace std;

int main() {
    // a dynamic(we dont need to know how big it is) array, it can grow/shrink
    vector<int> v1 = {1, 2, 3, 4};
    v1.push_back(9); // adding to the end of the vector pushes from the back 
    cout << v1.capacity() << endl;
    // the capacity is the amount of things in the array but since it can grow it doubles when you add one more thing 
    v1.pop_back(); //remove the very last element from the vector but the capacity/memory stays the same 
    v1.shrink_to_fit(); // incase there is space/memory not being used since the capacity/memory stays the same this method removes it 
    cout << v1[2] << endl; // indexing 
    cout << v1.back() << v1.front() << endl; // the back and the front values
    cout << v1.size() << endl; // tells us the number of elements in a vector



    

    return 0;
}
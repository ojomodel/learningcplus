#include <iostream>              // Lets your program use input/output tools like cout and cin
using namespace std;             // Lets you write cout instead of std::cout

template <typename T, typename U> // Makes the function work with different data types (like int, double, etc.)
auto max(T x, U y) {              // Creates a function named max that takes two values (x and y) and returns the bigger one
    return (x > y) ? x : y;       // If x is bigger than y, return x; otherwise return y (this is a shortcut "if")
}

int main() {                      // This is where the program starts running

    // Nothing is happening yet because we haven't called max() or printed anything

    return 0;                     // Ends the program (0 means it ended normally)
}

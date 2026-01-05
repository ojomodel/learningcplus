#include <iostream>
using namespace std;
void curveScore(int *pgrades, int studentsize) {
    for (int i = 0; i < studentsize; i++) {
        *(pgrades + i) += 5;
    }
}
int main() {
    int studentsize;
    cout << "How many students: "; cin >> studentsize;
    int *pgrades = nullptr;
    pgrades = new int[studentsize];
    cout << "--- Initial Grades ---\n";
    for (int i = 0; i < studentsize; i++) {
        
        cout << "Student #" << i + 1 << " | Address: " << (pgrades + i) << " | Score: ";
        cin >> *(pgrades + i);
    }
    cout << "--- Grades After Curve ---\n";
    curveScore(pgrades, studentsize);
    float gradeaverage = 0;
    for ( int i = 0; i < studentsize; i++) {
        cout << "Student #" << i + 1 
             << " | Address: " << (pgrades + i) 
             << " | Score: " << *(pgrades + i) << '\n';
        gradeaverage = gradeaverage + *(pgrades + i);
    }
    cout<< "-------------------------\n"
        << "Class average: " << (gradeaverage / studentsize) << '\n'
        << "-------------------------\n"
        << "Memory deleted. Exiting...";
    delete[] pgrades;
    return 0;
}
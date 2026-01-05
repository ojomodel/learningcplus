#include <iostream>
using namespace std;

void showseats(char grid[][5], int rows) {
    for (int i = 0; i < rows; i++ ) {
        for (int j = 0; j < 5; j++) {
            cout << '[' << grid[i][j] << ']' << " ";
        }
        cout << '\n';
    }
}

bool bookseat(char grid[][5], int r, int c) {
    if (grid[r][c] == 'O') {
        grid[r][c] = 'X';
        return true;
    }
    return false;
}

int main() {
    char seat[5][5] = {
        {'O','O','O','O','O'},
        {'O','O','O','O','O'},
        {'O','O','O','O','O'},
        {'O','O','O','O','O'},
        {'O','O','O','O','O'}
    };
    
    // Kept your style, but just a heads up: this requires C++17
    int sizn = size(seat); 
    
    int r;
    int c;
    do {
        showseats(seat, sizn);
        
        cout << "Enter Row (0-4) or -1 to Exit: "; cin >> r;
        if (r <= -1) break;
        
        // --- FIX #1: Logic Error ---
        // OLD: if (r < 0 || r == 4)  <-- Banned row 4
        // NEW: if (r < 0 || r > 4)   <-- Only bans numbers bigger than 4
        if (r < 0 || r > 4) {
             cout << "invalid input!\n";
             continue;
        }

        cout << "Enter Column (0-4): "; cin >> c;
        
        // --- FIX #2: Logic Error ---
        // OLD: if (c < 0 || c == 4)  <-- Banned col 4
        // NEW: if (c < 0 || c > 4)   <-- Only bans numbers bigger than 4
        if (c < 0 || c > 4) {
             cout << "invalid input!\n";
             continue;
        }

        if (bookseat(seat, r, c)) {
            cout << "Success! Seat booked.\n";
        }
        else {
            cout << "Failed! Seat taken or invalid.\n";
        }
        
    } while (r != -1);
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int architect = 0;
    char choice;
    char symbol;
    int size;
    do {
        cout << "Choose a shape: \n1. Solid Square \n2. Staircase \n3. Hollow Box \n4. Exit \nSelection: "; cin >> choice;
        if (choice >= '1' && choice < '4') {
            architect = choice - '0'; // convert char to int

            cout << "Enter symbol: "; cin >> symbol;
            cout << "Enter size: "; cin >> size;

            switch (architect) 
            {
            case 2:
                for (int i = 0; i <= size; i++) {
                    cout << string(i, symbol) << '\n';
                }
                break;
            case 1:
                for (int j = 0; j < size; j++) {
                    cout << string(size, symbol);
                    cout << '\n';
                }
                break;
            case 4:
                break;
            case 3:
                for (int i = 0; i < size; i++)
                    if (i <= 0 || i == (size - 1)) {
                        cout << string(size, symbol) << '\n';
                    }
                    else
                    {
                        cout << string(1, symbol) << string(size - 2, ' ')<< symbol<< '\n';
                    }
                break;      
            }

            continue;
            }
        else if (choice == '4')
        {
            break;
        }
        
        else {
            architect = 0; // invalid choice
        }
        
    } while(choice != 4);



    return 0;

}
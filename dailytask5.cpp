#include <iostream>
using namespace std;
enum Job { Warrior = 1 , Mage = 2, Rogue = 3};
struct Stats {
    int strength;
    int intelligence;
 };
class Character {
    private:
        int health;
    protected: 
        string name;
    public:
    int gethealth() {
        return health;
    }
    // int sethealth (int h) {
    //     // no negative numbers allowed
    //     if (h < 0) health = 0;
    //     else {
    //         health = h;
    //     } 
    // }
    void sethealth (int h) {
        if (h < 0) {
            health = 0;
        }
        else {
            health = h;
        }
        // return health;
    }
};
class Hero : public Character {
    public:
    Job job;
    Stats attributes; 
    Hero(string xName, int xHealth, Job xJob) {
        name = xName;
        sethealth(xHealth);
        job = xJob;
        switch (xJob)
        {
            case 1:
                attributes = {10, 5};
                break;
            case 2:
                attributes = {2, 10};
                break;
            case 3:
                attributes = {7, 7};
                break;
            default:
                break;
        }   
    }
    void showSheet() {
        cout << "Name: " << name << endl;
        cout << "HP:   " << gethealth() << "..." << endl; 
        cout << "Str:  " << attributes.strength << endl;
        cout << "Int:  " << attributes.intelligence << endl;
        cout << "========================\n";
    }   
};


int main()
{
    cout << "--- CREATING HERO ---\n";
    Hero player1("Arthur", 100, Warrior);
    player1.showSheet();
    cout << "--- TESTING DAMAGE ---\n";
    player1.sethealth(-50);
    player1.showSheet();
    return 0;
}

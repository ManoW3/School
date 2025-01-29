//Emanuel Wertman
//10/7/24
//Mood Tracker
//Uses a while loop if they are feeling Atharva Usturge

#include <iostream>

using namespace std;

int main()
{
    // switch variable
    int x;
    // Asks their mood and assigns it to an integer.
    cout << "What is your current mood: \n 1) Happy\n 2) Sad\n 3) Sus\n 4) Thankful\n 5) Atharva Ustruge" << endl;
    cin >> x;

    // switch statement
    switch (x) {
    case 1:
        cout << "Woohoo!!! You're Happy";
        break;
    case 2:
        cout << "Awwww, get better soon gang";
        break;
    case 3:
        cout << "Only in Ohio (Those Who Know)";
        break;
    case 4:
        cout << "That's great, I am aswell!";
        break;
    case 5:
        // My extra: Prints Atharva Ustruge forever
        while(true){
            cout << "Athharva Usturge ";
        }
        break;
    default:
        cout << "That is NOT an option (Those who know)";
        break;
    }
    return 0;
}

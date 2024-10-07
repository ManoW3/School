#include <iostream>

using namespace std;

int main()
{
    // switch variable
    int x;
    cout << "What is your current mood: \n 1) Happy\n 2) Sad\n 3) Sus\n 4) Thankful\n 5) Atharva Ustruge" << endl;
    cin >> x;

    // switch statements
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
// Mano Wertman
// Name thing
// 12/6/24
#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "What's your name? " << endl;
    getline(cin, name);

    string converted;

    for (char c : name) {
        if(isalpha(c)||isspace(c)){         // Checks if it is alpha or a space
            char upperC = toupper(c);       
            converted += upperC;            // addes the converted char to the string
        }
        else{
            return 0;
        }
    }

    cout << "Your uppercase name is: " << converted << "!" << endl;     // prints out the string

}

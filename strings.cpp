#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "What's your name? " << endl;
    getline(cin, name);

    string converted;

    for (char c : name) {
        if(isalpha(c)){
            char upperC = toupper(c);
            converted += upperC;
        }
        else{
            return 0;
        }
    }

    cout << "Your uppercase name is: " << converted << "!" << endl;

}

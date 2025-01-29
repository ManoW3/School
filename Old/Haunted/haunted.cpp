// Neel and Mano
// 10/17
// Haunted Hause CYOA
// Extra: Prints the ascii art from another file

#include <iostream>
#include <string>
#include <fstream>
// #include <Windows.h>s

#pragma comment(lib, "winmm.lib")

using namespace std;
// Function for the point where you choose to go right or down
void direction(){
    char movement;
    cout << "Do you want to take a right or go downstairs (r/d)" << endl;
    cin >> movement;
    if(movement == 'd'){
        //Ending 1
        cout << "You enter the basement and see Diddy diddling. (you poopy your pants and die) (freaky ending)" << endl;
    }
    else{
        char song;
        cout << "There is a speaker with 4 song options which do you pick: FE!N, GO GO GO GO, Oppy Day, Sicko Mode (f/g/o/s)?" << endl;
        cin >> song;
        // Switch statement for song choice
        switch (song)
        {
        case 'f':
            cout << "Mano and Neel will now start singing FE!N to summon Travy Patty" << endl;
            // Ending 2
            cout << "You play Fein and Travis Scott rescues you from the haunted house (happy ending)" << endl;
            break;
        case 'g':
            cout << "Mano and Neel will now start singing GO GO GO GO to summon my king carti (Jumpscare Included)" << endl;
            // Ending 3
            cout << "You play GO Go Go and Carti possess you and you turn into an opium demon (evil ending) " << endl;
            break;
        case 'o':
            cout << "Mano and Neel will now start singing OPPY DAY!!!!!!!!! and lil mabu will get rizzed up" << endl;
            // Ending 4
            cout << "You play Oppy Day and you get rizzed by Lil Mabu (Mathematically Disrespectful ending)" << endl;
            break;
        case 's':
            cout << "Mano and Neel will now start singing SICKO MODE and you will all get rizzed up!" << endl;
            // Ending 5
            cout << "You play Sicko Mode and you die in a moshpit (die lit ending (carti reference?? (evil ending)))" << endl;
            break;
        default:
            break;
        }
    }
}

int main() {
    char enter;
    cout << "Do you want to enter the haunted house (with rizz)(y/n)? " << endl;
    cin >> enter;
    //If they say yes, it will do the rest
    if (enter == 'y') {
        char others;
        // Alone or others
        cout << "Do you go alone or with other people (a/o)? " << endl;
        cin >> others;
        others = tolower(others);
        if (others == 'o') {
            // Group choice
            cout << "Which group will you pick?\nGroup 1: Neely Peely, Mano, Mrs. Alblas\nGroup 2: Pkuail Row Boat, Joey Jacobs, KSI (1/2) " << endl;
            int group;
            cin >> group;
            // Ending 6
            if (group == 1) {
                direction();
            } else {
                cout << "KSI turns you into drippy cheese because of Pkuail and Joey while singing the Thick Of It and drinking Prime, you die (exploding ear ending)" << endl;
            }
        } 
        else {
            direction();
        }
    } 
    else {
        cout << "You are trapped outside the house and the huzz helps you not freeze to death, you escape (rizzful ending)" << endl;
    }
    // Prints carti as a little reward
    string idk;
    cout << "Anyways, here is my king carti as a little reward (Press y to see (Make sure terminal font size is 10, and terminal is as wide as possible))" << endl;
    cin >> idk;
    
    // Makes a string for each line
    string line;
    // Opens the file using ifstream
    ifstream MyReadFile("carti.txt");
    // While there is another line, it will print it the endl
    while (getline (MyReadFile, line)) {
    cout << line << endl;
    }
    // Closes the file
    MyReadFile.close();
}

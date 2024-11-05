// Mano Wertman
// 11/5/24
// Looping Lab
// Made the while loop game far more complicated
#include <iostream>

using namespace std;

int main(){
    
    // For Loop

    string total;
    for(int i = 1; i <=7; i++){
        string quote;
        cout << "Enter today's motivational quote: ";
        getline(cin, quote);
        total += quote + "\n";
    }
    cout << total;


    // While Loops
    cout << "---------------------------------" << endl;
    cout << "Welcome to the Zombie Game!!!" << endl;
    cout << "Try not to: \nRun out of energy\nRun out of supplies\nStay in your shelter for over 30 days" << endl;
    cout << "---------------------------------" << endl;
    cout << "Good luck!" << endl;
    int energy = 5;
    int supplies = 1;
    int day = 1;
    while(energy > 0 && supplies < 10 && day < 30 && supplies >= 0){
        cout << "---------------------------------" << endl;
        cout << "Day " << day << " Stats:" << endl;
        cout << "Energy: " << energy << endl;
        cout << "Supplies: " << supplies << endl;
        cout << "---------------------------------" << endl;
        int choice;
        cout << "Day " << day << ":" << endl;
        cout << "1) Search for supplies\n  +1 Supplies\n  -1 Energy\n2) Rest\n  -1 Supplies\n  +2 Energy\n";
        cin >> choice;
        if(choice == 1){
            supplies +=1;
            energy -=1;
            cout << "-1 Energy\n+1 Supplies" << endl;
        }
        else if(choice == 2){
            energy += 2;
            supplies -= 1;
            cout << "-1 Supplies" << endl;
            cout << "+2 Energy" << endl;
        }
        else{
            continue;
        }
        
        day += 1;
    }
    if(supplies == 10){
        cout << "Woohoo! You survived after " << day << " days!" << endl;
    }
    else if(energy == 0 || supplies < 0){
        cout << "You died :( Better luck next time!" << endl;
    }
    else{
        cout << "You waited too long, the Zombies found your base, goodnight :(" << endl;
    }

    // Do While!!!
    int password = 235;
    int guess;
    char tryAgain;
    do
    {
        cout << "What is your guess? ";
        cin >> guess;
        if(password!=guess){
            cout << "Wrong, woud you like to play again? (Y/N): ";
            cin >> tryAgain;
            if(tryAgain == 'N' or tryAgain == 'n'){
                cout << "Adois, you couldn't guess it" << endl;
                break;
            }
        }
    }while(password!=guess);

    if(password == guess){
        cout << "Yay!!! You unlocked the box";
    }
}


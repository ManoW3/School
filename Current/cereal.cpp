// Emanuel Wertman
// January 26, 2025
// Vectors Lab 2
// Extra: Used multiple vectors
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    cout << "Welcome to Cereal Rankings! You will be given a cereal, and then you will choose the number where you would rank it" << endl;
    vector<string> cerealList = {"Cinnamon Toast Crunch", "Honey Nut Cheerios", "Frosted Flakes", "Rice Krispies", "Apple Jacks", "Froot Loops", "Frosted Mini Wheats", "Normal Cheerios", "Lucky Charms", "Raisin Bran", "Coco Puffs", "Captain Crunch", "Honey Oh's", "Chex", "Krave", "Honey Bunches of Oats", "Panda Puffs", "Cookie Crisp"};
    vector<string> userRanking(5, "________");
    int choicePlace;

    for (auto itr = cerealList.begin(); itr != cerealList.end(); ++itr) {
        cout << "===========================================" << endl;
        for (int i = 0; i < userRanking.size(); i++) {
            cout << i+1 << ". " << userRanking[i] << endl;
        }
        cout << "Where would you like to place " << *itr << ": " << endl;
        cin >> choicePlace;

        if (choicePlace < 1 || choicePlace > 5) {
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            continue; // Skip to the next iteration
        }

        userRanking.erase(userRanking.begin()+choicePlace-1);
        userRanking.insert(userRanking.begin()+choicePlace-1, *itr);
    }
    // Final Rankings Printing
    cout << "\nYour final cereal rankings:" << endl;
    for (int i = 0; i < userRanking.size(); i++) {
        cout << i + 1 << ". " << userRanking[i] << endl;
    }
    return 0;
}

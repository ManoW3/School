// Emanuel Wertman
// Vectors Lab
// January 26, 2025
// Extra: almost fully functional snake game (its in another repository so I'll link it on google classroom)
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display a greeting using the vector of names
void displayGreeting(vector<string> names) {
    cout << "Hello, ";
    for (string name : names) {
        cout << name << " ";
    }
    cout << "!" << endl;
}

int main() {
    // Task 1
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // a. Display the 3rd number
    cout << "The 3rd number is: " << nums[2] << endl;

    // b. Remove the last number
    nums.pop_back();

    // c. Display all numbers using a for-each loop
    cout << "All numbers: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Task 2
    vector<int> numbers;
    int menuChoice, element;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add Element" << endl;
        cout << "2. Display Vector" << endl;
        cout << "3. Vector Size" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> menuChoice;

        if (menuChoice == 1) {
            cout << "Enter an integer to add: ";
            cin >> element;
            numbers.push_back(element);
        } else if (menuChoice == 2) {
            cout << "Vector elements: ";
            for (int num : numbers) {
                cout << num << " ";
            }
            cout << endl;
        } else if (menuChoice == 3) {
            cout << "Current size of the vector: " << numbers.size() << endl;
        }
    } while (menuChoice != 4);

    // Task 3
    vector<string> colors;
    string color;
    char choice;

    do {
        cout << "Enter your favorite color: ";
        cin >> color;
        colors.push_back(color);

        cout << "Would you like to add another color? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nYour favorite colors are: ";
    for (string c : colors) {
        cout << c << " ";
    }
    cout << endl;

    // Task 4
    vector<string> names;
    int numNames;
    string name;

    cout << "How many names do you have? ";
    cin >> numNames;

    // Input names from the user
    for (int i = 0; i < numNames; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        cin >> name;
        names.push_back(name);
    }

    // Pass the vector itself to the function
    displayGreeting(names);



    return 0;
}

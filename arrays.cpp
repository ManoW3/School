#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate average
double calculateAverage(double arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return round(sum / size * 10.0) / 10.0;
}

int main() {
    int randomNumbers[10];
    srand(time(0)); // Seed for random number generation

    cout << "Array: ";
    for (int i = 0; i < 10; i++) {
        randomNumbers[i] = rand() % 10 + 1; // Random number between 1 and 10
        cout << randomNumbers[i] << " ";
    }
    cout << endl;

    cout << "Array Backwards: ";
    for (int i = 9; i >= 0; i--) {
        cout << randomNumbers[i] << " ";
    }
    cout << endl;

    int evenCount = 0;
    for (int i = 0; i < 10; i++) {
        if (randomNumbers[i] % 2 == 0) {
            evenCount++;
        }
    }
    cout << "Total even numbers: " << evenCount << endl;

    // Sales for ice cream store
    int sales[5];
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    cout << "Enter total sales for each day:\n";
    for (int i = 0; i < 5; i++) {
        cout << days[i] << ": ";
        cin >> sales[i];
    }

    string continueProgram;
    do {
        int dayChoice;
        cout << "Choose a day (1 for Monday, 2 for Tuesday, ... 5 for Friday): ";
        cin >> dayChoice;

        if (dayChoice >= 1 && dayChoice <= 5) {
            cout << "Total sales for " << days[dayChoice - 1] << ": " << sales[dayChoice - 1] << endl;
        } else {
            cout << "Invalid day choice!" << endl;
        }

        cout << "Do you wish to continue? (Yes/No): ";
        cin >> continueProgram;
    } while (continueProgram != "No");

    // Ages of 20 people
    int ages[20];
    int countOver15 = 0;

    cout << "Enter the ages of 20 people:\n";
    for (int i = 0; i < 20; i++) {
        cout << "Enter age #" << i + 1 << ": ";
        cin >> ages[i];
        if (ages[i] > 15) {
            countOver15++;
        }
    }

    cout << "Total number of ages greater than 15: " << countOver15 << endl;

    // Task 4: Calculate average of finalGrade array
    double finalGrade[] = {85.8, 93.7, 76, 88.5, 100, 91.3};
    int gradeSize = sizeof(finalGrade) / sizeof(finalGrade[0]);

    double average = calculateAverage(finalGrade, gradeSize);
    cout << "Average of final grades: " << average << endl;

    return 0;
}

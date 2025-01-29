// Mano Wertman
// Time Library
// 12/12/24
#include <iostream>
#include <ctime>
#include <cstdlib> // Needed for rand() and srand()

using namespace std;
int main() {
    // 1. It is 7 PM in Tokyo, the UTC offset it +9 hours
    // 2. UTC -7 hours

    // Program 1
    time_t now = time(nullptr);
    cout << "The time right now is " << ctime(&now) << endl;

    // Program 2
    time_t time2 = time(nullptr);
    int offset;
    cout << "Input a time offset from UTC: ";               
    cin >> offset;                                                                      // Gets user's input

    int secondsOffset = offset * 3600;                                                  // Calculated the offset in seconds
    now += secondsOffset;                                                               // Adds the offset to the current time from the previous program
    tm* newTime = gmtime(&time2);                                                         // Converts it into UTC (GMT)

    cout << "The current time in your time zone is: " << asctime(newTime) << endl;      // Prints it out


    // Program 3
    srand(time(0));
    time_t startTime = time(nullptr);
    int guess;
    int score;
    for (int i = 1; i <= 10; i++) {
        int firstRand = rand() % 20;
        int secondRand = rand() % 20;
        printf("%d. What is %d + %d?\n",i ,firstRand, secondRand);
        cin >> guess;
        if(guess == firstRand + secondRand)
            score++;

    }
    
    time_t endTime = time(nullptr);
    double totalTime = difftime(endTime, startTime);
    double timePerQuestion = totalTime/10;

    if (score > 5)
        printf("It took you %d seconds to answer those 10 questions, That is an average of %.1f per question\n", int(totalTime), timePerQuestion);
    else
        printf("You got under 50%%!\n");
}

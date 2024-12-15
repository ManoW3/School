// Mano Wertman
// Time Library
// 12/12/24
#include <iostream>
#include <ctime>
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
    time_t startTime = time(nullptr);

    int guess;
    cout << "What is 8 + 9? ";
    cin >> guess;

    time_t entTime = time(nullptr);

    
}

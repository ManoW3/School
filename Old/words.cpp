// Mano Wertman
// Word Problems
// 11/25/24
#include <iostream>
#include <cmath>
using namespace std;

// Because I don't think cmath has a log base function, and I need it (this works cuz of properties of logarithms)
double logBase(double a, double b)
{
    return log2(a) / log2(b);
}

int main()
{
    
    // I have a right triangle shaped yard and need to put a fence around it. If it is 12 feet long and 5 feet wide, how much total fence will I need?
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "I have a right triangle shaped yard and need to put a fence around it. If it is 12 feet long and 5 feet wide, how much total fence will I need?" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
    int a = 12;
    int b = 5;
    int csq = pow(a, 2) + pow(b, 2);        // Finds the hypotenuse using the pythagorean theorem
    int hypot = sqrt(csq);
    int totalFence = a + b + hypot;         // Add its all together for the perimiter
    cout << "You will need " << totalFence << " Feet of fence" << endl << endl;


    // John is walking ALONG a unit circle, he walks 30º (Up from 1, 0), what is his current x position?
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "John is walking ALONG a unit circle, he walks 30º (Up from 1, 0), what is his current x position?" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
    double rads = 30*(3.1415926535/180);            // Converts to Radians
    cout << "His y position will be " << cos(rads) << " Units" << endl << endl;

    // A crypto is rising at 6% per day, if the coin starts at $0.01, how long will it take until it overtakes Dow Jones ($44,782.00 as of writing this problem)
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "A crypto is rising at 6% per day, if the coin starts at $0.01, how long will it take until it overtakes Dow Jones ($44,782.00 as of writing this problem)" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
    double curPrice = 0.01;                                // Current Price
    double increase = 0.07;                                // increase per day
    double targetValue = 44782;                            // The target value (price of the stock)

    double rateOfChange = 1+increase;
    double argument = targetValue/curPrice;                // The wrote the equation and moved the thing to the other side
    double result = logBase(argument, rateOfChange);       // uses my function from before to caluclate the x

    cout << "It will take " << ceil(result) << " Days to overtake Dow Jones" << endl;
}
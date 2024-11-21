// Mano Wertman
// 11/21/24
// Functions Lab
// Extra: Not needed
#include <iostream>
using namespace std;

void countdown();
void greeting(string name, int times);
int favNum();
int average(int a, int b, int c);

int main()
{
    // Example 1
    countdown();

    // Example 2
    string name;
    int times;
    // Gets name and times
    cout << "What is your name? ";
    cin >> name;
    cout << "How many times would you like to see your name? ";
    cin >> times;
    greeting(name, times);

    // Example 3
    int fav = favNum();
    cout << "Your favorite number is: " << fav << "!" << endl;

    // Example 4
    int a, b, c;
    // Gets the 3 numbers
    cout << "Enter your 3 numbers: " << endl;
    cin >> a >> b >> c;
    int ave = average(a, b, c);
    cout << "THe average is: " << ave;
}

void countdown(){
    // Counts down from 10
    for (int i = 10; i > 0; i--) {
        cout << i << endl;
    }
    cout << "Lift Off!" << endl;
}

void greeting(string name, int times) {
    // Greets user however many times they chose
    for(int i = 0; i < times; i++){
        cout << "Hello " << name << "!" << endl; 
    }
}

int favNum() {
    // Returns the users favorite num
    return 7;
}

int average(int a, int b, int c) {
    // Returns the average
    return (a+b+c)/3;
}
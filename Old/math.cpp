// Mano Wertman
// 12/18/24
// Do Now rounding and random
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
    double num = 3.141592653589793238462668;
    double roundedNum = round(num*100.0)/100.0;
    printf("Rounded Number: %.2f\n", roundedNum);

    srand(time(0));
    int min = 1; 
    int max = 10;
    int randomNumber = (rand() % (max - min + 1)) + min;
    printf("Random Number between 1-10: %d\n", randomNumber);
}


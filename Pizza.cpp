// Mano Wertman]
// Pizza Shop
// 11/25/24
// Extra: Used per inch (area) instead of s/m/l, included tax, rounded to 2 decimal places
#include <iostream>
#include <iomanip>

using namespace std;
// Gloabl variables
double pricePerInch = .362196;
double pricePerTopping = 1.39;
// Functions
double pizzaPrice(int pizzaQ, int area, int toppingsQ);
double calcArea(double inches);
void bill(double cost, int size, int pizzaQ, int toppingsQ);
int main()
{
    // Greeting
    cout << "--------------------------------------" << endl;
    cout << "  Welcome to the Skibidi Ohio Pizza" << endl;
    cout << "--------------------------------------" << endl;
    // Local functions
    double size;
    int toppingsQ;
    int pizzaQ;
    int toppingsEach;
    // Gets size and amounts
    cout << "How many Inches would you like (Diameter) ? " << endl;
    cin >> size;
    cout << "How many Pizzas would you like to order? " << endl;
    cin >> pizzaQ;
    cout << "How many toppings would you like per pizza? " << endl;

    cin >> toppingsEach;

    toppingsQ = toppingsEach*pizzaQ;
    // Calss fuctions
    double area = calcArea(size);
    double subTotal = pizzaPrice(pizzaQ, area, toppingsQ);
    bill(subTotal, size, pizzaQ, toppingsQ);

    return 0;   
}


double calcArea(double inches) {
    return (inches/2)*(inches/2)*3.14159265;
}

double pizzaPrice(int pizzaQ, int area, int toppingsQ){
    return ((area*pricePerInch) + (toppingsQ))*pizzaQ;
}

void bill(double cost, int size, int pizzaQ, int toppingsQ){
    cout << "                 BILL                 " << endl;
    cout << "--------------------------------------" << endl;
    cout << "Size: " << size << " Inches" << endl;
    cout << "Pizzas: " << pizzaQ << endl;
    cout << "Pizzas Price: $" << cost << endl;
    cout << "Toppings: $" << toppingsQ*pricePerTopping << endl;
    printf ( "Subtotal: $%.2f \n",  cost);
    printf ( "Total: $%.2f \n",  cost*1.06625);
    cout << "--------------------------------------" << endl;
}

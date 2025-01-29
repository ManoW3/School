// Atharva and Mano
// September 30
// IKEA Project
//Tuff numbers at the end & Fanum Tax 👅
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector> 
using namespace std;

// Help from Stratton, Stack Overflow, and google
vector<string> asciiNum(int num) {
    vector<string> result;  
    // Switch statement that returns a vector of every line in the ascii number
    switch(num) {
        case 0:
            result.push_back("   .-.   ");
            result.push_back(" /    \\  ");
            result.push_back("|  .-. ; ");
            result.push_back("| |  | | ");
            result.push_back("| |  | | ");
            result.push_back("| |  | | ");
            result.push_back("| '  | | ");
            result.push_back("'  `-' / ");
            result.push_back(" `.__,'  ");
            break; 
        case 1:
            result.push_back(" .--.  ");
            result.push_back("(_  |  ");
            result.push_back("  | |  ");
            result.push_back("  | |  ");
            result.push_back("  | |  ");
            result.push_back("  | |  ");
            result.push_back("  | |  ");
            result.push_back("  | |  ");
            result.push_back(" (___) ");
            break;
        case 2:
            result.push_back("  .--.    ");
            result.push_back(" ;  _  \\  ");
            result.push_back("(___)` |  ");
            result.push_back("     ' '  ");
            result.push_back("    / /   ");
            result.push_back("   / /    ");
            result.push_back("  / /     ");
            result.push_back(" / '____  ");
            result.push_back("(_______) ");
            break;
          case 3:
            result.push_back("   .--.   ");
            result.push_back(" /     \\  ");
            result.push_back("(___)`. | ");
            result.push_back("   .-' /  ");
            result.push_back("   '. \\   ");
            result.push_back(" ___ \\ '  ");
            result.push_back("(   ) ; | ");
            result.push_back(" \\ `-'  / ");
            result.push_back("  ',__.'  "); 
            break;
          case 4:
            result.push_back("     ,--.   ");
            result.push_back("    /   |   ");
            result.push_back("   / .' |   ");
            result.push_back("  / / | |   ");
            result.push_back(" / /  | |   ");
            result.push_back("/  `--' |-. ");
            result.push_back("`-----| |-' ");
            result.push_back("      | |   ");
            result.push_back("     (___)  ");
            break;
          case 5:
            result.push_back(",-----.   ");
            result.push_back("|   ___)  ");
            result.push_back("|  |      ");
            result.push_back("|  '-.    ");
            result.push_back("'---.  .  ");
            result.push_back(" ___ `  \\ ");
            result.push_back("(   ) | | ");
            result.push_back(" ; `-'  / ");
            result.push_back("  '.__.'  ");
            break;
          case 6:
            result.push_back("  .--.   ");
            result.push_back(" / ,  ;  ");
            result.push_back("| .(___) ");
            result.push_back("| | _    ");
            result.push_back("| '` `.  ");
            result.push_back("| .-,  . ");
            result.push_back("| |  | | ");
            result.push_back(". `-'  ; ");
            result.push_back(" '.__.'  ");
            break;
          case 7:
            result.push_back(" .----.. ");
            result.push_back("(____  | ");
            result.push_back("     | | ");
            result.push_back("     | | ");
            result.push_back("     | | ");
            result.push_back("     | | ");
            result.push_back("     | | ");
            result.push_back("     | | ");
            result.push_back("    (___)");
            break;
          case 8:
            result.push_back("   .--.   ");
            result.push_back(" /  _  \\  ");
            result.push_back(". .' `. ; ");
            result.push_back("| \\   | | ");
            result.push_back(" \\ `.(_.' ");
            result.push_back(" /`'. '.  ");
            result.push_back("| |  `\\ | ");
            result.push_back("; '._,' ' ");
            result.push_back(" '.___.'  ");
            break;
          case 9:
            result.push_back("  .--.   ");
            result.push_back(" /    \\  ");
            result.push_back(";  ,-. ' ");
            result.push_back("| |  | | ");
            result.push_back("'  `-' | ");
            result.push_back(" `.__. | ");
            result.push_back(" ___ | | ");
            result.push_back("(   )' / ");
            result.push_back(" `,__.'  ");
            break;
        default:
            break;
    }
    return result;
}
// Had to make the dollar sign into a different class
vector<string> asciiDollar() {
    vector<string> result;
      result.push_back("   ,-.    ");
      result.push_back(" .-| |-.  ");
      result.push_back("|  | |_/  ");
      result.push_back("\\  | |.   ");
      result.push_back(" '-| | '. ");
      result.push_back(".- | |  | ");
      result.push_back("| `| |  / ");
      result.push_back(" `-| |'`  ");
      result.push_back("   `-'    ");
    return result;
}

// Got off Stack Overflow
vector<int> intToVector(int number) {
    vector<int> digits;
    // Convert the integer to a string to easily access each digit
    string numStr = to_string(number);
    // Iterate through each character in the string and convert it to an integer
    for (char digit : numStr) {
        digits.push_back(digit - '0'); // Convert char to int
    }
    return digits;
}

int main() {
  // Greeting!
  cout << "---------------------------------------------------------------------------" << endl;
  cout << " Hello and welcome to Ikea Denville, we hope you will enjoy shopping here!" << endl;
  cout << "---------------------------------------------------------------------------" << endl;
  // Standing Desks
  char standingTable;
  char sizeStandingTable;
  int amountStandingTable = 0; 
  cout << "Would you like to buy a Standing Desk? (y/n) " << endl;
  cin >> standingTable;
  standingTable = tolower(standingTable);
  if(standingTable == 'y'){
    cout << "What size would you like to buy? (small-s/medium-m/large-l) " << endl;
    cin >> sizeStandingTable;
      if(sizeStandingTable != 's' && sizeStandingTable != 'm' && sizeStandingTable != 'l'){
      cout << "That's not a valid size." << endl;
      return 1;
    }
    cout << "How many standing desks would you like to buy? " << endl;
    cin >> amountStandingTable; 
    }
  
  // Table Tops
  char tableTop;
  char materialTableTop;
  int amountTableTop = 0;
  cout << "Would you like to buy a Table Top? (y/n) " << endl;
  cin >> tableTop;
  tableTop = tolower(tableTop);
  if(tableTop == 'y'){
    cout << "What would you like the tabletop to be made out of? (Wooden-w/Marble-m/Granite-g) " << endl;
    cin >> materialTableTop;
    if(materialTableTop != 'w' && materialTableTop != 'm' && materialTableTop != 'g'){
      cout << "That's not a valid size." << endl;
      return 1;
    }
    cout << "How many table tops would you like to buy? " << endl;
    cin >> amountTableTop; 
    }

  // Blackout Curtains
  char blackoutCurtains;
  int sizeBlackoutCurtain = 0;
  int amountBlackoutCurtain = 0;
  cout << "Would you like to buy a Blackout Curtain (y/n) " << endl;
  cin >> blackoutCurtains;
  blackoutCurtains = tolower(blackoutCurtains);
  if(blackoutCurtains == 'y'){
    cout << "What size would you like? (45-54)" << endl;
    cin >> sizeBlackoutCurtain;
    if (sizeBlackoutCurtain < 45 || sizeBlackoutCurtain > 54){
      cout << "That's not a valid size." << endl;
      return 1;
    }
    cout << "How many Blackout Curtains would you like to buy? " << endl;
    cin >> amountBlackoutCurtain;
    }
    
  // Table Legs
  char tableLegs;
  char tableLegsColor;
  int amountTableLegs = 0;
  cout << "Would you like to buy Table Legs? (y/n) " << endl;
  cin >> tableLegs;
  tableLegs = tolower(tableLegs);
  if(tableLegs == 'y'){
    cout << "What color would you like? (Black - b, White - w, Red - r)" << endl;
    cin >> tableLegsColor;
      if(tableLegsColor != 'b' && tableLegsColor != 'w' && tableLegsColor != 'r'){
      cout << "That's not a valid size." << endl;
      return 1;
    }
    cout << "How many Table Legs would you like? " << endl;
    cin >> amountTableLegs;
  }

  // BILL
  cout << "--------------------------------------------------------------------------" << endl;
  cout << "__  __                    ____  _ ____" << endl;
  cout << "\\ \\/ /___  __  _______   / __ )(_) / /" << endl;
  cout << " \\  / __ \\/ / / / ___/  / __  / / / / " << endl;
  cout << " / / /_/ / /_/ / /     / /_/ / / / /  " << endl;
  cout << "/_/\\____/\\__,_/_/     /_____/_/_/_/   " << endl;
  cout << "                                      " << endl;
  cout << "--------------------------------------------------------------------------" << endl;
  // Calculates the amount total spent on each item, the subtotal, and the amount of items bought.
  double totalStandingTable = amountStandingTable * 229.99;
  double totalTableTop = amountTableTop * 89.99;
  double totalBlackoutCurtain = amountBlackoutCurtain * 33.99;
  double totalTableLegs = amountTableLegs * 10.99;
  double subtotal = totalStandingTable + totalTableTop + totalBlackoutCurtain + totalTableLegs;
  int totalItems = amountStandingTable + amountTableTop + amountBlackoutCurtain + amountTableLegs;
  // Calculates all the taxes and total
  double normalTax = subtotal * .06625;
  double fanumTax = pow(subtotal, 1.02) - subtotal;
  double taxDouble = round((normalTax + fanumTax) * 100)/100;
  double total = subtotal + taxDouble;
  // Usees if statements to check if they have more than 1 of each item, if they do it prints it with an s at the end
  cout << "Total Items in Your Cart: " << totalItems << endl;
  cout << "--------------------------------------------------------------------------" << endl;
  if(amountStandingTable == 1){
    cout << amountStandingTable << " Standing Table: $" << totalStandingTable <<endl;
  }
  else{
    cout << amountStandingTable << " Standing Tables: $" << totalStandingTable <<endl;
  }


  if(amountTableTop == 1){
    cout << amountTableTop << " Table Top: $" << totalTableTop <<endl;
  }
  else{
    cout << amountTableTop << " Table Tops: $" << totalTableTop <<endl;
  }


  if(amountBlackoutCurtain == 1){
    cout << amountBlackoutCurtain << " Blackout Curtain: $" << totalBlackoutCurtain <<endl;
  }
  else{
    cout << amountBlackoutCurtain << " Blackout Curtains: $" << totalBlackoutCurtain <<endl;
  }


  if(amountTableLegs == 1){
    cout << amountTableLegs << " Table Leg: $" << totalTableLegs <<endl;
  }
  else{
    cout << amountTableLegs << " Table Legs: $" << totalTableLegs <<endl;
  }
  // Prints the subtotal, tax, and total
  cout << "--------------------------------------------------------------------------" << endl;
  cout << "Subtotal: $" << subtotal << endl;
  cout << "Tax: $" << taxDouble << endl;
  cout << "Total: $" << total << endl;

  // Took me so long to do :(
  int totalToPrint = total*100;
  vector<int> toPrintVector = intToVector(totalToPrint);
  vector<vector<string> > allTheThings;

  // Adds the dolar sign at the beginning pf the vector
  allTheThings.push_back(asciiDollar());

  for(int i = 0; i < toPrintVector.size(); ++i) {
    allTheThings.push_back(asciiNum(toPrintVector[i]));
  }
// Loop to print the 9 lines that are in each letter
  for(int i = 0; i < 9; ++i) {
    // Loop to print the line that is needed
    for(int j = 0; j < allTheThings.size(); j++) {
      // I had to hardcode the period cause otherwise it would be way to complicated
      if(j == allTheThings.size()-3){
        if(i == 6){
          cout << allTheThings[j][i] << " .-.  ";
        }
        else if(i == 7){
          cout << allTheThings[j][i] << "(   ) ";
        }
        else if(i == 8){
          cout << allTheThings[j][i] << " `-'  ";
        }
        else{
          cout << allTheThings[j][i] << "      ";
        }
      }
      else{
        // Prints the correct line from the 2d vector that I made before
        cout << allTheThings[j][i] << " ";
      }
    }
    // Makes a new line at the end
  cout << endl;
  }



  return 0;
}

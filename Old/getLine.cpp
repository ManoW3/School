#include <iostream>
#include <string>
using namespace std;


int main()
{
    string fullList;
    int length;
    cout << "How long would you lke the list of movies to be?" << endl;
    cin >> length;
    cin.ignore();
    for(int i = 1; i <= length; i++){
        string movie;
        cout << "Enter Movie #" << i << ": ";
        getline(cin, movie);
        string stringNum = to_string(i);
        fullList += stringNum; 
        fullList += ". ";
        fullList += movie;
        fullList += "\n";
    }
    cout << fullList;
    return 0;
}

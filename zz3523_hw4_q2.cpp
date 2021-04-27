
#include <iostream>
using namespace std;
int main()
{
    int input;
    int numOfRomanLetter, remainder;
    int i;
    string representation;
    cout << "Enter decimal number: " << endl;
    cin >> input;
    remainder = input;
    numOfRomanLetter = remainder / 1000;
    remainder = remainder % 1000;
    for (i = 1; i <= numOfRomanLetter; i++) {
        representation = representation + "M";
    }
    numOfRomanLetter = remainder / 500;
    remainder = remainder % 500;
    for (i = 1; i <= numOfRomanLetter && i<=1; i++) {
        representation = representation + "D";
    }
    numOfRomanLetter = remainder / 100;
    remainder = remainder % 100;
    for (i = 1; i <= numOfRomanLetter && i <= 4; i++) {
        representation = representation + "C";
    }
    numOfRomanLetter = remainder / 50;
    remainder = remainder % 50;
    for (i = 1; i <= numOfRomanLetter && i <= 1; i++) {
        representation = representation + "L";
    }
    numOfRomanLetter = remainder / 10;
    remainder = remainder % 10;
    for (i = 1; i <= numOfRomanLetter && i <= 4; i++) {
        representation = representation + "X";
    }
    numOfRomanLetter = remainder / 5;
    remainder = remainder % 5;
    for (i = 1; i <= numOfRomanLetter && i <= 1; i++) {
        representation = representation + "V";
    }
    numOfRomanLetter = remainder / 1;
    for (i = 1; i <= numOfRomanLetter && i <= 4; i++) {
        representation = representation + "I";
    }
    
    cout << input<< " is "<<representation;
    
    return 0;
}


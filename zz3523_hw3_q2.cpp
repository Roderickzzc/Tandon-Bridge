
#include <iostream>
using namespace std;
int main()
{
    string name,status;
    int graduationYear, currentYear, yearsToGraduate;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your graduation year: ";
    cin >> graduationYear;
    cout << "Please enter your current year: ";
    cin >> currentYear;
    yearsToGraduate = graduationYear - currentYear;
    if (yearsToGraduate = 4) {
        status = "a Freshman";
    }
    else if (yearsToGraduate = 3) {
        status = "a Sophomore";
    }
    else if (yearsToGraduate = 2) {
        status = "a Junior";
    }
    else if (yearsToGraduate = 1) {
        status = "a Senior";
    }
    else if (yearsToGraduate <= 0) {
        status = "Graduated";
    }
    else {
        status = "not in college yet";
    }
    cout << name << ", you are " << status;

    return 0;
}


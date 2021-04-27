

#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
bool leapYear(int year);
void printYearCalender(int year, int startingDay);

int main()
{
    int year, startingDay;
    cout << "Please enter the year and the day of January 1st in that year separated by a space"<< endl;
    cin >> year >> startingDay;
    printYearCalender(year, startingDay);
    return 0;
}

int printMonthCalender(int numOfDays, int startingDay) {
    int i, j;
    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;
    for (i = 1; i < startingDay; i++) {
        cout << "\t";
    }
    for (j = 1; j <= numOfDays; j++) {
        cout << j << "\t";
        if ((j + startingDay - 1) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
    if (((startingDay + numOfDays) % 7)==0) {
        return 7;
    }
    else {
        return (startingDay + numOfDays) % 7;
    }
}

bool leapYear(int year) {
    bool isLeapYear = false;
    if (year % 4 == 0) {
        isLeapYear = true;
    }
    if (year % 100 == 0) {
        isLeapYear = false;
    }
    if (year % 400 == 0) {
        isLeapYear = true;
    }
    return isLeapYear;

}

void printYearCalender(int year, int startingDay) {
    cout << endl;
    cout << "January " << year << endl;
    startingDay=printMonthCalender(31, startingDay);
    cout << endl;
   
    if (leapYear(year) == true) {
        cout << "Febuary " << year << endl;
        startingDay = printMonthCalender(29, startingDay);
        cout << endl;
    }
    else {
        cout << "Febuary " << year << endl;
        startingDay = printMonthCalender(28, startingDay);
        cout << endl;
    }

    cout << "March " << year << endl;
    startingDay = printMonthCalender(31, startingDay);
    cout << endl;

    cout << "April " << year << endl;
    startingDay = printMonthCalender(30, startingDay);
    cout << endl;

    cout << "May " << year << endl;
    startingDay = printMonthCalender(31, startingDay);
    cout << endl;

    cout << "June " << year << endl;
    startingDay = printMonthCalender(30, startingDay);
    cout << endl;

    cout << "July " << year << endl;
    startingDay = printMonthCalender(31, startingDay);
    cout << endl;

    cout << "August " << year << endl;
    startingDay = printMonthCalender(31, startingDay);
    cout << endl;

    cout << "September " << year << endl;
    startingDay = printMonthCalender(30, startingDay);
    cout << endl;

    cout << "October " << year << endl;
    startingDay = printMonthCalender(31, startingDay);
    cout << endl;

    cout << "November " << year << endl;
    startingDay = printMonthCalender(30, startingDay);
    cout << endl;

    cout << "December " << year << endl;
    startingDay = printMonthCalender(31, startingDay);
    cout << endl;
    
}

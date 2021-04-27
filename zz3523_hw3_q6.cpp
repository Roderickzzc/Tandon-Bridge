
#include <iostream>
using namespace std;
int main()
{   
    string day;
    int length,hour,minute;
    char colon;
    double costPerMinute,totalCost;
    cout << "Plase enter the day of the week (Mo/Tu/We/Th/Fr/Sa/Su): ";
    cin >> day;
    cout << "Plase enter the time the call started (in 24-hour notation): ";
    cin >> hour>>colon>>minute;
    cout << "Please enter the length of the call in minutes: ";
    cin >> length;
    
    if (day == "Sa" || day == "Su") {
        costPerMinute = 0.15;
    }
    else if (hour < 8 || hour > 18) {
        costPerMinute = 0.25;
    }
    else {
        costPerMinute = 0.40;
    }

    totalCost = costPerMinute * length;
    cout << "The cost is "<<totalCost;
    return 0;
}


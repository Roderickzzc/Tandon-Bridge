

#include <iostream>
using namespace std;
const int HoursPerDay = 24, MinsPerHour = 60;

int main()
{
    int JohnDays, JohnHours, JohnMin, BillDays, BillHours, BillMin;
    int CombinedDays, CombinedHours, CombinedMins;
    int CarriedoverHours, CarriedoverDays;
    int TotalDays, TotalHours, TotalMins;

    cout << "Please enter the number of days John has worked: ";
    cin >> JohnDays;
    cout << "Please enter the number of hours John has worked: ";
    cin >> JohnHours;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> JohnMin;
    cout << "\nPlease enter the number of days Bill has worked: ";
    cin >> BillDays;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> BillHours;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> BillMin;

    CombinedDays = JohnDays + BillDays;
    CarriedoverDays = (JohnHours + BillHours) / HoursPerDay;
    CombinedHours = (JohnHours + BillHours) % HoursPerDay;
    CarriedoverHours = (JohnMin + BillMin) / MinsPerHour;
    CombinedMins = (JohnMin + BillMin) % MinsPerHour;

    TotalDays = CombinedDays + CarriedoverDays;
    TotalHours = CombinedHours + CarriedoverHours;
    TotalMins = CombinedMins;

    cout << "\nThe total time both of them worked together is: " << TotalDays << " days, " << TotalHours << " hours and " << TotalMins << " minutes.";



    return 0;
}

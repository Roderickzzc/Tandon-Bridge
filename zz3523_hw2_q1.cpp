
#include <iostream>
using namespace std;
const int QuartersToCent = 25, NickelsToCent = 5, DimestoCent = 10, PenniesToCent = 1;
const int DollarsToCent = 100;
int main()
{
    int NumOfQuarters, NumOfDimes, NumOfNickels, NumOfPennies;
    int NumOfCents;
    int CombinedDollars, CombinedCents;
    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters: ";
    cin >> NumOfQuarters;
    cout << "# of dimes: ";
    cin >> NumOfDimes;
    cout << "# of nickels: ";
    cin >> NumOfNickels;
    cout << "# of pennies: ";
    cin >> NumOfPennies;

    NumOfCents = NumOfQuarters * QuartersToCent + NumOfDimes * DimestoCent + NumOfNickels * NickelsToCent + NumOfPennies * PenniesToCent;

    CombinedDollars = NumOfCents / DollarsToCent;
    CombinedCents = NumOfCents % DollarsToCent;

    cout << "The total is " << CombinedDollars << " dollars and " << CombinedCents << " cents";
    
    return 0;

}



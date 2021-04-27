

#include <iostream>
using namespace std;
const int QuartersToCent = 25, NickelsToCent = 5, DimestoCent = 10, PenniesToCent = 1;
const int DollarsToCent = 100;
int main()
{
    int NumOfQuarters, NumOfDimes, NumOfNickels, NumOfPennies;
    int NumOfCents;
    int CombinedDollars, CombinedCents;

    cout << "Please	enter your amount in the format	of dollars and cents separated by a space:" << endl;
    cin >> CombinedDollars >> CombinedCents;

    NumOfCents = CombinedDollars * DollarsToCent + CombinedCents;

    NumOfQuarters = NumOfCents / QuartersToCent;
    NumOfDimes = NumOfCents % QuartersToCent / DimestoCent; // remaining number of cents to dimes
    NumOfNickels = NumOfCents % QuartersToCent % DimestoCent / NickelsToCent;
    NumOfPennies = NumOfCents % QuartersToCent % DimestoCent % NickelsToCent / PenniesToCent;

    cout << CombinedDollars << " dollars and "<< CombinedCents <<" cents are:" << endl;
    cout << NumOfQuarters << " quarters, " << NumOfDimes << " dimes, " << NumOfNickels << " nickels and " << NumOfPennies << " pennies";

    return 0;
}


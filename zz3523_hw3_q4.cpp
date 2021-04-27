

#include <iostream>
using namespace std;
const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;
int main()
{
    double input;
    int method, roundedInput;
    cout << "Please enter a Real number: " << endl;
    cin >> input;
    cout << "Choose your rounding method:" << endl;
    cout << "1.Floor round" << endl;
    cout << "2.Ceiling round" << endl;
    cout << "3.Round to the nearest whole number" << endl;
    cin >> method;
    switch (method)
    {   
    case FLOOR_ROUND:
        roundedInput=(int)input;
        break;
    case CEILING_ROUND:
        roundedInput=(int)input+1;
        break;
    case ROUND:
        if (input - (int)input >= 0.5) {
            roundedInput = (int)input + 1;
        }
        else {
            roundedInput = (int)input;
        }
        break;

    }
    cout << roundedInput;
    return 0;
}


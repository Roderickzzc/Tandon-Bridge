

#include <iostream>
using namespace std;

int main()
{
    int input,remainder, divisor;
    int binary=0, i=1;
    cout << "Enter decimal number: " << endl;
    cin >> input;
    divisor = input;
    while (divisor > 0) {
        remainder = divisor % 2;
        divisor = divisor / 2;
        binary = binary + remainder * i;
        i *= 10;
    }
    cout << "The binary representation of "<< input<< " is "<<binary;
    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int input,i;
    int num,digit,count_even,count_odd;
    cout << "Please enter a positive integer: " << endl;
    cin >> input;

    for (i = 1; i <= input; i++) {
        num = i;
        count_even = 0;
        count_odd = 0;
        while (num > 0) {
            digit = num % 10;
            if (digit % 2 == 0) {
                count_even += 1;
            }
            else {
                count_odd += 1;
            }
            num = num / 10;
        }
        if (count_even > count_odd) {
            cout << i << endl;
        }
    }
    return 0;
}


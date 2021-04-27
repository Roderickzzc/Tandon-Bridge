
#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int n;
    cout << "Please enter a positive integer: ";
    cin >> n;
    cout << fib(n);
    return 0;
}

int fib(int n) {
    int i;
    int firstAdd = 1, secondAdd = 1,sum=0;
    if (n <= 2) {
        sum = 1;
    }
    else {
        for (i = 3; i <= n; i++) {
            sum = firstAdd + secondAdd;
            firstAdd = secondAdd;
            secondAdd = sum;
        }
    }
    
    return sum;
}

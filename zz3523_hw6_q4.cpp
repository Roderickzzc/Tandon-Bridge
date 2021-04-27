
#include <iostream>
using namespace std;

void printDivisors(int num);

int main(){
    int input;
    cout << "Please enter a positive integer >= 2:";
    cin >> input;
    printDivisors(input);
    return 0;
}

void printDivisors(int num) {
    int i,j;
    for (i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    //i is now sqrt(num)+1
    //j begins with sqrt(num)-1 to avoid output double sqrt(num)
    for (j = i-2; j >= 1; j--) {
        if (num % j == 0) {
            cout << num / j << " ";
        }
    }
    
}

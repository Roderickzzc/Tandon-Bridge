

#include <iostream>
using namespace std;
int main()
{
    int num,i,j,k;
    cout << "Please enter a positive integer: "<<endl;
    cin >> num;
    for (i = 2 * num - 1; i > 0;i=i-2) {
        for (k = 0; k < (2 * num - 1-i)/2; k++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    for (i = 1; i <= 2 * num - 1; i = i + 2) {
        for (k = 0; k < (2 * num - 1 - i) / 2; k++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;
int main()
{
    int input,n,m;
    cout << "Please enter a positive integer: ";
    cin >> input;
    n = 1;
    cout << "section a" << endl;
    while (n <= input) {
        cout << 2 * n<<endl;
        n++;
    }
    cout << "section b" << endl;
    for (m = 1; m <= input; m++) {
        cout << 2 * m << endl;
    }
    return 0;
}


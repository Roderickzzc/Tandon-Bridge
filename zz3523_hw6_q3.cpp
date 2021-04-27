

#include <iostream>
using namespace std;

double eApprox(int n);

int main()
{
    cout.precision(30);

    for (int n = 1; n <= 15; n++) {
        cout << "n = " << n << '\t' << eApprox(n) << endl;
    }
    return 0;
}

double eApprox(int n) {
    double currentTerm, sum,factor;
    int i;
    
    currentTerm = 1;
    sum = 0;

    for (i = 0; i <= n; i++) {

         if (i == 0) {
             factor = 1;
         }
         else {
             factor = (double)1 / i;
         }
         currentTerm = currentTerm * factor;
         sum += currentTerm;
    }
    
    
    return sum;
    
}


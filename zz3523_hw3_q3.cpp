


#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    double a, b, c;
    double delta,solution1,solution2;
    int power;
    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    if (a == 0 && b != 0) {
        power = 1;
    }
    else if (a == 0 && b == 0) {
        power = 0;
    }
    else {
        power = 2;
    }

    if (power == 1) {
        solution1 = -c / b;
        cout << "This equation has a single real solution x=" << solution1;
    }
    else if(power == 2) {
        delta = b * b - 4 * a * c;
        if (delta>0) {
            solution1 = (-b + sqrt(delta)) / (2 * a);
            solution2 = (-b - sqrt(delta)) / (2 * a);
            cout<< "This equation has two real solutions x1=" << solution1<<" and x2="<<solution2;
        }
        else if (delta==0){
            solution1= (-b) / (2 * a);
            cout << "This equation has a single real solution x=" << solution1;
        }
        else { 
            cout << "This equation has no real solution";
        }
    }
    else {
        if (c == 0) {
            cout<< "This equation has infinite number of solutions";
        }
        else{
            cout << "This equation has no solution";
        }
    }
    
    
    return 0;
}


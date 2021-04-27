
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int length, i;
    double input, product, root;
    cout << "section a" << endl;
    cout << "Please enter the length of the sequence: ";
    cin >> length;
    cout << "Please enter your sequence: " << endl;
    product = 1;
    for (i = 1; i <= length; i++) {
        cin >> input;
        product = (double)input * product;
    }
    root = pow(product, 1 / (double)length);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    cout << "The geometric mean is: " << root<<endl;


    cout << "section b" << endl;
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing - 1:" << endl;
    bool stop=0;
    int count=0;
    double input_sectionb,product_sectionb,root_sectionb;
    product_sectionb = 1;
    while (stop==0) {
        
        cin >> input_sectionb;
        if (input_sectionb ==-1) {
            stop = 1;
        }
        else {
            product_sectionb = product_sectionb * input_sectionb;
            count = count + 1;
        }
    }
    root_sectionb = pow(product_sectionb, 1 / (double)count);
    cout << "The geometric mean is: " << root_sectionb<<endl;
    return 0;
}

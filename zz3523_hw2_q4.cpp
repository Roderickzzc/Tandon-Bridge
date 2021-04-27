

#include <iostream>
using namespace std;
int main()
{
    int FirstInt, SecondInt;
    
    cout << "Please enter two positive integers, separated by a space: " << endl;
    cin >> FirstInt >> SecondInt;
    cout << FirstInt << " + " << SecondInt << " = " << FirstInt + SecondInt << endl;
    cout << FirstInt << " - " << SecondInt << " = " << FirstInt - SecondInt << endl;
    cout << FirstInt << " * " << SecondInt << " = " << FirstInt * SecondInt << endl;
    cout << FirstInt << " / " << SecondInt << " = " << ((float) FirstInt) / ((float)SecondInt) << endl;
    cout << FirstInt << " div " << SecondInt << " = " << FirstInt / SecondInt << endl;
    cout << FirstInt << " mod " << SecondInt << " = " << FirstInt % SecondInt << endl;
    return 0;
}


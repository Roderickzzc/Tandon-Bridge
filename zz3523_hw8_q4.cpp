

#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <string>
using namespace std;

void generateRand(int arr[]);
void correctPassword(int arr[], int pwd[]);
void stringToArray(string str, int entered_pwd[]);
bool isCorrect(int real_pwd[], int entered_pwd[]);

const int pinSize = 5;
int pin[] = { 1,2,3,4,5 };

int main()
{
    int arr[10];
    int real_pwd[5];
    string numInput;
    int entered_pwd[5];
    int i,j;
    cout << "Please enter your PIN according to the following mapping:" << endl;
    cout << "PIN:\t0 1 2 3 4 5 6 7 8 9"<< endl;
    cout << "NUM:\t";

    generateRand(arr);
    correctPassword(arr, real_pwd);
    getline(cin, numInput);
    stringToArray(numInput, entered_pwd);

    if (isCorrect(real_pwd, entered_pwd)) {
        cout << "Your PIN is correct";
    }
    else {
        cout << "Your PIN is not correct";
    }
    
    
    return 0;
}

void generateRand(int arr[]) {
    srand(time(NULL));

    int i;
    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 3 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
}

void correctPassword(int arr[], int real_pwd[]) {
    int i;
    
    for (i = 0; i < pinSize; i++) {
        real_pwd[i] = arr[pin[i]];
    }
    
}

void stringToArray(string str,int entered_pwd[]) {
    int i;
    for (i = 0; i < pinSize; i++) {
        entered_pwd[i] = (int)str[i] - (int)'1' + 1;
    }

}

bool isCorrect(int real_pwd[], int entered_pwd[]) {
    int i;
    for (i = 0; i < pinSize; i++) {
        if (real_pwd[i] != entered_pwd[i]) {
            return false;
        }
    }
    return true;
}
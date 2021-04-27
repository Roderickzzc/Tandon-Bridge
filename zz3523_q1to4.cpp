

#include <iostream>
using namespace std;


/*
q1. 
Actually for n=1,2,3,4,5 the statement is not true

Base step: when k = 6, a_6 = a_4 + a_5 = 8 >= (sqrt(2))^6 = 8
Induction step: Assume by strong induction that it is true that a_k >= （sqrt(2))^k for all k smaller or equal to n .
a_(k+1) = a_k + a_(k-1) >= (sqrt(2))^k + (sqrt(2))^(k-1) = (sqrt(2))^(k-1)*(sqrt(2)+1) >= (sqrt(2))^(k-1)*(1+1) = (sqrt(2))^(k-1)*2 = (sqrt(2))^(k-1)*(sqrt(2))^2 = (sqrt(2))^(k+1)
So for every positive integer, a_n >= (sqrt(2))^n.


q2.
a. First digit choose one from 10 numbers C(10,1), second digit only 9 choices left C(9,1), third digit 8 left C(8,1), fourth digit 7 left C(7,1).
So we have C(10,1)*C(9,1)*C(8,1)*C(7,1) = 5040

b. 
This is equivalent to choose 4 different numbers from 10 digits. Because each selection has only one increasing-order form.
So C(10,4)=210

q3.
a. 
P(X=0)=0
P(X=1)=1/4
P(X=2)=3/4*1/4=3/16
P(X=3)= 3/4*3/4*1/4 = 9/64
P(X=4) = 1-(P(X=1)+P(X=2)+P(X=3))= 27/64
P(X>=5) = 0

b.
E(X)=1*P(X=1)+2*P(X=2)+3*P(X=3)+4*P(X=4) = 1/4 + 2*(3/16) + 3*(9/64) + 4*(27/64) = 175/64

q4.
a.
Outside the loop, it is constant time.
Within each iteration, it is also constant time. 
Only need to count how many iterations, 
it is 1+2+3+...+log(n)=(1+log(n))*log(n)/2 = theta(log(n)*log(n))
So the running time is theta((log(n))^2)

b.
1. Because it the arr within the function first10Squares() is defined in the runtime, after the function is executed, it will be deleted.
2. 
int* first10Squares() {

    int* arr = new int [10];//modified 
    for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * (i + 1);
    }
    return arr;

}

void printArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";

    cout << endl;
}


int main()
{
    int* arr;
    arr = first10Squares();

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;//modified
    return 0;
}


*/
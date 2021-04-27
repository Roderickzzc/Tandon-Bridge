
#include <iostream>
#include <cmath>
using namespace std;

void analyzeDivisors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main()
{
    int input, i,j;
    int outCountDivs1, outSumDivs1;
    int outCountDivs2, outSumDivs2;
    cout << "Please enter a positive integer M (>=2): ";
    cin >> input;
    cout << "The prefect numbers between 2 and M are: " << endl;
    for (i = 2; i <= input; i++) {
        if (isPerfect(i)) {
            cout << i<<" ";
        }
    }
    cout << endl;
    cout << "All pairs of amicable numbers between 2 and M are: " << endl;
    for (j = 2; j <= input; j++) {
        if (!isPerfect(j)) {
            analyzeDivisors(j, outCountDivs1, outSumDivs1);
            analyzeDivisors(outSumDivs1, outCountDivs2, outSumDivs2);
            if ((j == outSumDivs2)&&(outSumDivs1<=input)&&(j<= outSumDivs1)) {
                cout << j <<" " << outSumDivs1<<endl;
            }
        }
    }
    
    
    return 0;
}

void analyzeDivisors(int num, int& outCountDivs, int& outSumDivs) {
    int i,j;
    int compDivisors;
    outCountDivs = 0;
    outSumDivs = 0;
    for (i = 1; i <= sqrt(num); i++) {
        if ((num % i == 0) && (num != i * i)&&(i!=1) ){
            compDivisors = num / i;
            outCountDivs += 2;
            outSumDivs += i + compDivisors;
        }
        else if ((num % i == 0) && ((num == i * i)||(i==1))){
            outCountDivs += 1;
            outSumDivs += i;
        }
    }
}

bool isPerfect(int num) {
    int outCountDivs, outSumDivs;
    analyzeDivisors(num, outCountDivs, outSumDivs);
    if (num == outSumDivs) {
        return true;
    }
    else {
        return false;
    }
}
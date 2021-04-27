

#include <iostream>
using namespace std;
int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main()
{
    int arr[4] = {2,-1,3,10 };
    cout << sumOfSquares(arr, 4);
    cout << endl;
    cout << isSorted(arr, 4);
    return 0;
}

int sumOfSquares(int arr[], int arrSize) {
    int res;
    if (arrSize == 1) {
        return arr[0] * arr[0];
    }
    else {
        res=sumOfSquares(arr, arrSize - 1)+arr[arrSize-1]*arr[arrSize-1];
        return res;
    }
}

bool isSorted(int arr[], int arrSize) {
    if (arrSize == 1) {
        return true;
    }
    else {
        if (isSorted(arr, arrSize-1) && (arr[arrSize - 1] >= arr[arrSize - 2]) ){
            return true;
        }
        else {
            return false;
        }
    }
}
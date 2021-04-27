
#include <iostream>
using namespace std;
int minCost(int arr[], int arrSize);

int main()
{
    int arr[6] = { 0,2,3,57,69,10 };
    cout << minCost(arr, 6);
    return 0;
}


int minCost(int arr[],int arrSize) {
    int res;
    if (arrSize == 1||arrSize==0) {
        return 0;
    }
    if (arrSize == 2) {
        return arr[1];
    }
    else {
        if (arr[arrSize - 3] <= arr[arrSize - 2]) {
            return arr[arrSize - 1] + minCost(arr,arrSize - 2);
        }
        else {
            return arr[arrSize - 1] + minCost(arr, arrSize - 1);
        }
        
    }
}

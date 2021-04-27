
#include <iostream>
using namespace std;
int minInArray(int arr[], int arrSize);
void minArrayIndex(int arr[], int arrSize, int min);

const int arrSize = 20;

int main()
{
    int i,minimum;
    int arr[arrSize];
    cout << "Please enter 20 integers separated by a space: "<<endl;
    for (i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }
    minimum = minInArray(arr,arrSize);
    cout << "The minimum value is "<<minimum<<", and it is located in the following indices: ";
    minArrayIndex(arr, arrSize, minimum);
    return 0;
}

int minInArray(int arr[], int arrSize) {
    int min, i;
    min = arr[0];
    for (i = 0; i < arrSize; i++) {
        if (arr[i] <= min) {
            min = arr[i];
        }
    }
    return min;
}

void minArrayIndex(int arr[], int arrSize,int min) {
    int i;
    for (i = 0; i < arrSize; i++) {
        if (arr[i] == min) {
            cout<< i<<" ";
        }
    }
}


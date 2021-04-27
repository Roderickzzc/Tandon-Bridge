
#include <iostream>
using namespace std;
void oddsKeepEvensFlip(int arr[], int arrSize);

int main()
{
    int arr[6] = { 5,2,11,7,6,4 };
    oddsKeepEvensFlip(arr, 6);
    int i;
    
    for (i = 0; i < 6; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}

void oddsKeepEvensFlip(int arr[], int arrSize) {
    int* temp = NULL;
    temp = new int[arrSize];
    int i,count_odd=0,count_even=0;
    for(i=0;i<arrSize;i++){
        if (arr[i] % 2 != 0) {
            temp[count_odd] = arr[i];
            count_odd++;
        }
        else if (arr[i] % 2 == 0) {
            temp[arrSize - 1 - count_even] = arr[i];
            count_even++;
        }
    }
    
    for (i = 0; i < arrSize; i++) {
        arr = temp;
    }
    
    delete[] temp;
    temp = NULL;
}

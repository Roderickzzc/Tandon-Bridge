

#include <iostream>
using namespace std;
int* findMissing(int arr[], int n, int& resArrSize);

int main()
{
    int arr[6] = { 3,1,3,0,6,4 };
    int n = 6;
    int resArrSize;
    int* mis_arr = findMissing(arr, n, resArrSize);
    
    int i;
    
    for (i = 0; i <resArrSize; i++) {
        
        cout << mis_arr[i] << endl;
    }


    delete[] mis_arr;

    return 0;
}

int* findMissing(int arr[], int n, int& resArrSize) {
    int* std_arr = new int[n + 1];
    int i;
    
    for (i = 0; i <= n; i++) {
        std_arr[i] = i;
    }
    
    for (i = 0; i < n; i++) {
        std_arr[arr[i]] = -1;
    }

    resArrSize = 0;
    for (i = 0; i <= n; i++) {
        if (std_arr[i] != -1) {
            resArrSize += 1;
        }
    }

    int* mis_arr = new int[resArrSize];
    int j = 0;
    for (i = 0; i <= n; i++) {
        if (std_arr[i] != -1) {
            mis_arr[j]=std_arr[i];
            j++;
        }
    }
    delete[] std_arr;
    return mis_arr;
}


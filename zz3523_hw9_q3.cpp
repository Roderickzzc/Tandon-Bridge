
#include <iostream>
using namespace std;
int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);


int main()
{
    //(a)
    cout << "getPosNums1: ";
    int arr1[6] = { 3,-1,-3,0,6,4 };
    int outPosArrSize = 0;
    getPosNums1(arr1, 6, outPosArrSize);
    int i;
    for (i = 0; i < outPosArrSize; i++) {
        cout << arr1[i] << ' ';
    }
    cout << endl;

    //(b)
    cout << "getPosNums2: ";
    int arr2[6] = { 3,-1,-3,0,6,4 };
    int* outPosArrSizePtr = NULL;
    outPosArrSizePtr = new int;
    getPosNums2(arr2, 6, outPosArrSizePtr);
    
    for (i = 0; i < *outPosArrSizePtr; i++) {
        cout << arr2[i] << ' ';
    }
    delete outPosArrSizePtr;
    outPosArrSizePtr = NULL;
    cout << endl;
    
    //(c)
    cout << "getPosNums3: ";
    int arr3[6] = { 3,-1,-3,0,6,4 };
    int *outPosArr=new int[6];
    outPosArrSize = 0;
    getPosNums3(arr3, 6, outPosArr,outPosArrSize);
    
    for (i = 0; i < outPosArrSize; i++) {
        cout << outPosArr[i] << ' ';
    }
    delete[] outPosArr;
    outPosArr = NULL;
    cout << endl;
    

    //(d)
    cout << "getPosNums4: ";
    int arr4[6] = { 3,-1,-3,0,6,4 };
    outPosArr=new int[6];
    int** outPosArrPtr= &outPosArr;
    outPosArrSizePtr = new int;
    getPosNums4(arr4, 6, outPosArrPtr,outPosArrSizePtr);
    
    for (i = 0; i < *outPosArrSizePtr; i++) {
        cout << (*outPosArrPtr)[i] << ' ';
    }
    delete outPosArrSizePtr;
    delete[] outPosArr;
    outPosArrSizePtr = NULL;
    outPosArr = NULL;
    cout << endl;
    return 0;



}

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize) {
    int i;
    int count=0;
    for (i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            arr[count] = arr[i];
            count += 1;
        }
    }
    outPosArrSize = count;

    return arr;
    
}

int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr) {
    int i;
    int count = 0;
    
    for (i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            arr[count] = arr[i];
            count += 1;
        }
    }
    *outPosArrSizePtr = count;

    return arr;
}

void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
    int i;
    int count = 0;

    for (i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArr[count] = arr[i];
            count += 1;
        }
    }
    
    outPosArrSize = count;

}

void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr) {
    int i;
    int count = 0;

    for (i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            (*outPosArrPtr)[count] = arr[i];
            count += 1;
        }
    }
    
    
    *outPosArrSizePtr = count;

}
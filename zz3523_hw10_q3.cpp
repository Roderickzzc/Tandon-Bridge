#include <iostream>
#include <vector>
using namespace std;
int* readNum(int& outArrSize);
int* indexArr(int userInput, int* arr, int arrSize, int& arrOutSize);
int main1();
vector<int> readNum_vec();
int* indexArr_vec(int userInput, vector<int> vec, int& arrOutSize);
int main2();


int main()
{
    cout << "Implementation without vector:" << endl;
    main1();
    cout << endl;
    cout << "Implementation with vector:" << endl;
    main2();

    return 0;
}

int main1() {

    cout << "Please enter a sequence of postive integers, each in a separated line." << endl;
    cout << "End your input by typing -1." << endl;
    
    int* arr=NULL;
    int* index_arr;
    int outArrSize;
    int indOutArrSize;
    arr = readNum(outArrSize);
    
    
    int userInput;
    cout << "Please enter a number you want to search." << endl;
    cin >> userInput;
    
    
    index_arr = indexArr(userInput, arr, outArrSize, indOutArrSize);
    int i;
    
    if (indOutArrSize == 0) {
        cout << userInput << " does not show at all in the sequence." << endl;
    }
    else if (indOutArrSize == 1) {
        cout << userInput << " shows in line "<<index_arr[0]+1<<"." << endl;
    }
    else {
        cout << userInput << " shows in lines ";
        for (i = 0; i < indOutArrSize - 1; i++) {
            cout << index_arr[i] + 1 << ",";
        }
        cout << index_arr[indOutArrSize - 1] + 1 << "." << endl;
    }
    

    delete[] arr;
    delete[] index_arr;
    
    return 0;
}

int* readNum(int& outArrSize) {

    int* arr=new int[1];

    bool seenMinusOne = false;
    int userInput;
    int arrSize=0;
    int arrPhysicalSize=1;
    while (seenMinusOne == false) {
        cin >> userInput;
        if (userInput == -1) {
            seenMinusOne = true;
        }
        else {
            
            if (arrSize == arrPhysicalSize) {
                int* newArr=new int[2*arrPhysicalSize];
                int i;
                for (i = 0; i < arrSize; i++) {
                    newArr[i] = arr[i];
                }
                delete[] arr;
                arr = newArr;
                arrPhysicalSize = 2 * arrPhysicalSize;
            }
            
            arr[arrSize] = userInput;
            
            
            arrSize += 1;

        }

    }
    outArrSize = arrSize;

    return arr;
}

int* indexArr(int userInput, int* arr, int arrSize, int& arrOutSize) {
    int i,j=0;
    arrOutSize = 0;
    int* index_arr = new int[arrSize];
    for (i = 0; i < arrSize; i++) {
        if (arr[i] == userInput) {
            index_arr[j] = i;
            //cout << i;
            arrOutSize += 1;
            j += 1;
        }
    }
    return index_arr;
}

int main2() {

    cout << "Please enter a sequence of postive integers, each in a separated line." << endl;
    cout << "End your input by typing -1." << endl;
    vector<int> vec;
    vec = readNum_vec();


    int userInput;
    cout << "Please enter a number you want to search." << endl;
    cin >> userInput;

    int indOutArrSize;
    int* index_arr;
    index_arr = indexArr_vec(userInput, vec, indOutArrSize);

    int i;

    if (indOutArrSize == 0) {
        cout << userInput << " does not show at all in the sequence." << endl;
    }
    else if (indOutArrSize == 1) {
        cout << userInput << " shows in line " << index_arr[0] + 1 << "." << endl;
    }
    else {
        cout << userInput << " shows in lines ";
        for (i = 0; i < indOutArrSize - 1; i++) {
            cout << index_arr[i] + 1 << ",";
        }
        cout << index_arr[indOutArrSize - 1] + 1 << "." << endl;
    }


    
    delete[] index_arr;

    return 0;
}

vector<int> readNum_vec() {
    vector<int> vec;

    bool seenMinusOne = false;
    int userInput;

    while (seenMinusOne == false) {
        cin >> userInput;
        if (userInput == -1) {
            seenMinusOne = true;
        }
        else {

            vec.push_back(userInput);

        }
    }
    return vec;
}

int* indexArr_vec(int userInput, vector<int> vec, int& arrOutSize) {
    int i, j = 0;
    arrOutSize = 0;
    int* index_arr = new int[vec.size()];
    for (i = 0; i < vec.size(); i++) {
        if (vec[i] == userInput) {
            index_arr[j] = i;
            //cout << i;
            arrOutSize += 1;
            j += 1;
        }
    }
    return index_arr;
}
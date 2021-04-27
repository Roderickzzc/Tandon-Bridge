#include <iostream>
#include <string>
using namespace std;

void existence_from_A_to_Z(string str, int arr[]);
bool isEqualArray(int arr1[], int arr2[], int arrSize);

int main()
{
    string userInput1,userInput2;
    int arr1[26];//create an array from a to z indicating each of its existence 
    int arr2[26];
    //initialization
    int i;
    for (i = 0; i < 26; i++) {
        arr1[i] = 0;
    }
    for (i = 0; i < 26; i++) {
        arr2[i] = 0;
    }

    cout << "Please enter your first line of text:" << endl;
    getline(cin, userInput1);
    cout << "Please enter your second line of text:" << endl;
    getline(cin, userInput2);
    

    existence_from_A_to_Z(userInput1, arr1);
    existence_from_A_to_Z(userInput2, arr2);

    if (isEqualArray(arr1, arr2, 26)){
        cout <<"\""<< userInput1<<"\"" << " and " << "\"" << userInput2 << "\"" <<" are anagrams";
    }
    else {
        cout << "\"" << userInput1 << "\"" << " and " << "\"" << userInput2 << "\"" << " are not anagrams";
    }

    return 0;
}


void existence_from_A_to_Z(string str, int arr[]) {
    int i;
    int j;
    for (i = 0; i < str.length(); i++) {
        if ((str[i] >= 'a') && (str[i] <= 'z')) {
            j = str[i] - 'a';
            arr[j] += 1;
        }
        else if ((str[i] >= 'A') && (str[i] <= 'Z')) {
            j = str[i] - 'A';
            arr[j] += 1;
        }
    }
}

bool isEqualArray(int arr1[], int arr2[],int arrSize) {
    int i;
    for (i = 0; i < arrSize; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

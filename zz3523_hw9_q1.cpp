

#include <iostream>
#include <string>
using namespace std;
int wordCount(string str);
void existence_from_A_to_Z(string str, int arr[]);

int main()
{
    string userInput;
    int arr[26];//create an array from a to z indicating each of its existence 
    
    //initialization
    int i;
    for (i = 0; i < 26; i++) {
        arr[i] = 0;
    }

    cout << "Please enter a line of text:" << endl;
    getline(cin,userInput);
    cout << wordCount(userInput)<<'\t'<<"words"<<endl;

    existence_from_A_to_Z(userInput, arr);
    for (i = 0; i < 26; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << '\t' <<(char)('a' + i)<<endl;
        }
    }
    return 0;
}

int wordCount(string str) {
    int i;
    int count=0;
    bool findword = false;
    str = str + ' ';
    for (i = 0; i < str.length(); i++) {
        if (((str[i] <= 'z') && (str[i] >= 'a')) || ((str[i] <= 'Z') && (str[i] >= 'A'))) {
            findword = true;
            //cout << "true";
        }
        if ((str[i] == ' ' || str[i] == ',' || str[i] == ';')&&findword==true) {
            count += 1;
            findword = false;
            //cout << "false";
        }
    }
    
    return count;
}

void existence_from_A_to_Z(string str,int arr[]){
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

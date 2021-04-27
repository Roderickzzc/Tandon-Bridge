
#include <iostream>
using namespace std;
bool isPalindrome(string str);

int main()
{
    string word;
    cout << "Please enter a word: ";
    cin >> word;
    if (isPalindrome(word)) {
        cout << word << " is a palindrome";
    }
    else {
        cout << word << " is not a palindrome";
    }
    return 0;
}

bool isPalindrome(string str) {
    string str_reverse;
    int i;
    str_reverse = "";
    for (i = str.length() - 1; i >= 0; i--) {
        str_reverse += str[i];
    }
    if (str == str_reverse) {
        return true;
    }
    else {
        return false;
    }
}
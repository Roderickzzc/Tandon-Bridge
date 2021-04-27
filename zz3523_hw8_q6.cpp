
#include <iostream>
#include <string>
using namespace std;


bool isAllDigit(string str); 
string replaceWithX(string str);

int main()
{
    string str,currstring;
    int i;
    int currdigit = 0;

    cout << "Please enter a line of text:" << endl;
    getline(cin, str);
    str += " ";

    for (i = 0; i < str.length(); i++) {

        if (str[i] == ' ') {

            //extract the word
            currstring = str.substr(currdigit, i-currdigit);
            
            if (isAllDigit(currstring)) {
                currstring = replaceWithX(currstring);
            }
            cout << currstring<<" ";
            currdigit = i + 1;
        }
    }
    
    return 0;
}



bool isAllDigit(string str) {
    int i;
    for (i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i]>'9') {
            return false;
        }
    }
    return true;
}

string replaceWithX(string str) {
    int i;
    for (i = 0; i <= str.length(); i++) {
        str[i] = 'x';
    }
    return str;

}


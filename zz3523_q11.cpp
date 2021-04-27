

#include <iostream>
using namespace std;

int main()
{
    char letter;
    int numOfLines,lineNum,numOfSpace;
    char whichLetterInLine;
    int i, j, k;
    cout << "Please enter a lower-case letter:" << endl;
    cin >> letter;
    numOfLines = letter - 'a'+1;
    for (lineNum = 1,numOfSpace= numOfLines-1; lineNum <= numOfLines; lineNum++,numOfSpace--) {
        
        if (lineNum % 2 == 0) {
            whichLetterInLine = 'A' + lineNum - 1;
        }
        else{
            whichLetterInLine = 'a' + lineNum - 1;
        }

        for (i = 1; i <= numOfSpace; i++) {
            cout << " ";
        }
        for (j = 1; j <= 2 * lineNum - 1; j++) {
            cout << whichLetterInLine;
        }
        for (k = 1; k <= numOfSpace; k++) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}


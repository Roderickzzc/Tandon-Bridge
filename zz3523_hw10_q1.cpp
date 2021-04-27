
#include <iostream>
#include <string>
using namespace std;
string* createWordsArray(string sentence, int& outWordsArrSize);

int main()
{
    
    string* textArr;
    int outWordsArrSize;
    string sentence;

    cout << "Please enter a sentence separated by one space: "<<endl;
    getline(cin, sentence);
    textArr = createWordsArray(sentence,outWordsArrSize);

    int i; 
    for (i = 0; i < outWordsArrSize; i++) {
        cout << textArr[i]<<endl;
    }

    delete[] textArr;
    
    
    return 0;
}

string* createWordsArray(string sentence, int& outWordsArrSize) {

    int i;
    outWordsArrSize = 0;
    sentence = sentence + " ";
    for (i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            outWordsArrSize += 1;
        }
    }

    string* textArr = new string[outWordsArrSize];
    int j = 0; 
    int cursor_loc = 0;
    int countword=0;
    string word;
    for (i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {

            word = sentence.substr(cursor_loc,countword);
            textArr[j] = word;

            cursor_loc = i + 1;
            countword = 0;
            j += 1;
        }
        else {
            countword++;
        }
    }

    return textArr;



}



#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{
	const int limit = 5;
	int randNum;
	int tryNum,lowerBound,upperBound,numLeft,guess;
	bool guessIsCorrect = false;

	srand(time(0));
	randNum = (rand()%100)+1;
	
	cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
	lowerBound = 1;
	upperBound = 100;
	
	for (tryNum = 1, numLeft=limit; (tryNum <= limit)&&(guessIsCorrect==false); tryNum++,numLeft--) {
		cout << "Range: [" << lowerBound << ", " << upperBound << "], Number of guesses left: " << numLeft<<endl;
		cout << "Your guess: ";
		cin >> guess;
		if ((guess != randNum) && (numLeft == 1)) {
			cout << "Out of guesses! My number is " << randNum;
		}
		else if (guess < randNum) {
			cout << "Wrong! My number is bigger." << endl;
			if (lowerBound < guess) {
				lowerBound = guess + 1;
			}
		}
		else if (guess > randNum) {
			cout << "Wrong! My number is smaller." << endl;
			if (upperBound > guess) {
				upperBound = guess - 1;
			}
		}
		else if (guess == randNum) {
			if (tryNum == 1) {
				cout << "Congrats! You guessed my number in " << tryNum << " guess.";
			}
			else {
				cout << "Congrats! You guessed my number in " << tryNum << " guesses.";
			}
			guessIsCorrect = true;
		}

	}
	
	return 0;
}


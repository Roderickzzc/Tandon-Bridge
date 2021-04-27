
#include <iostream>
using namespace std;

int main()
{
	string lastName, firstName, middle;
	cout << "Please enter your first name, middle name or initial and last name separted by a space: " << endl;
	cin >> firstName;
	cin >> middle;
	cin >> lastName;
	cout << lastName << ", " << firstName << " " << middle[0] << ".";

	return 0;
}


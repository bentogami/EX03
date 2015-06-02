//Chase Lake

#include <string>
#include <iostream>
using namespace std;

string sort(string& s);

int main()
{
	string test;
	cout << "Enter a string to be alphabetized: ";
	cin >> test;
	cout << "Alphabetized: " << sort(test) << endl;
}

string sort(string& s) {
	string after(s);
	int numSwitches;

	//I feel like I cheated because I couldn't find a way to use any string class functions.
	do {
		numSwitches = 0;
		for (int i = 0; i < (s.length() - 1); i++) {
			//compare the current letter to the next letter
			//If it's ASCII number is greater, swap them and tell the computer you did.
			if (tolower(s[i]) > tolower(s[i + 1])) {
				char temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
				numSwitches++;
			}
		}
		//Keep going until you're done swapping letters.
	} while (numSwitches > 0);
	
	return s;
}
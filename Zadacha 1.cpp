#include <iostream>
using namespace std;

char toUpperCase(char letter) {
	if (letter >= 'a' && letter <= 'z') {
		return letter - 'a' + 'A';
	}
	return letter;
}
bool checkIfLetter(char letter) {
	while (letter < 65 || letter>90 && letter < 97 || letter>122) {
		return false;
	}
	return true;
}

int main() {
	char letter;
	cout << "Enter a lower case letter to convert it to upper case: ";
	cin >> letter;
	while (checkIfLetter(letter) == false) {
		cout << "This is not a letter, please enter a letter: ";
		cin >> letter;
	}
	cout << "Your letter upper case is: " << toUpperCase(letter) << endl;

	system("PAUSE");
	return 0;
}

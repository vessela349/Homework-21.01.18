#include <iostream>
using namespace std;

int lenght(char text[], int counter = 0) {
	if ((int)text[counter] > 31 && (int)text[counter] < 127) {
		return lenght(text, counter + 1);
	}
	else {
		return counter;
	}
}

int main() {
	char firstWord[20];
	char secWord[20];
	cout << "Enter your first word between 10 and 20 symbols: ";
	cin >> firstWord;
	while (lenght(firstWord) < 10 || lenght(firstWord) > 20) {
		cout << "Enter a word between 10 and 20 symbols: ";
		cin >> firstWord;
	}
	cout << "Enter your second word between 10 and 20 symbols: ";
	cin >> secWord;
	while (lenght(secWord) < 10 || lenght(secWord) > 20) {
		cout << "Enter a word between 10 and 20 symbols: ";
		cin >> secWord;
	}

	if (lenght(firstWord) > lenght(secWord)) {
		cout << "The longer word is: " << firstWord << " containing " << lenght(firstWord) << " symbols." << endl;
	}
	else if (lenght(firstWord) == lenght(secWord)) {
		cout << "Both words " << firstWord << " and " << secWord << " have an equal amount of " << lenght(firstWord) << " symbols." << endl;
	}
	else {
		cout << "The longer word is: " << secWord << " containing " << lenght(secWord) << " symbols." << endl;
	}
	char switcher;
	for (int i = 0; i < 5; i++) {
		switcher = firstWord[i];
		firstWord[i] = secWord[i];
		secWord[i] = switcher;
	}
	cout << "The words switched are: " << firstWord << " and " << secWord << endl;

	system("PAUSE");
	return 0;
}
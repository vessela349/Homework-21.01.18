#include <iostream>
using namespace std;

bool T(char text[], int lenght = 100) {
	for (int i = 0; i < lenght; i++) {
		if (text[i] == 'T') {
			return true;
		}
	}
	return false;
}

void positions(char text[], int lenght = 100) {
	for (int i = 0; i < lenght; i++) {
		if (text[i] == 'T') {
			cout << "The text contains 'T' in position " << i + 1 <<"."<< endl;
		}
	}
}

int main() {
	char text[100];
	cout << "Enter text to check if it contains 'T': ";
	cin >> text;

	cout <<"The text contains 'T': "<< boolalpha << T(text) << endl;
	positions(text);

	system("PAUSE");
	return 0;
}
#include <iostream>
using namespace std;

int lenght(char text[],int counter = 0) {
	if ((int)text[counter] > 31 && (int)text[counter] < 127) {
		return lenght(text, counter + 1);
	}
	else {
		return counter;
	}
}

int main() {
	char text[100];
	cout << "Enter your text: ";
	cin.getline(text, 100);
	cout << "The number of symbols in your text is: " << lenght(text) <<"." << endl;

	system("PAUSE");
	return 0;
}
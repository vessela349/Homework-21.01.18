#include<iostream>
using namespace std;

void binary(int number) {
	if (number <= 1) {
		cout << number;
		return;
	}
	binary(number / 2);
	cout << number % 2;
}

int main() {
	int number;
	cout << "Enter number : ";
	cin >> number;

	while (number < 0) {
		cout << "This is not a positive number, please try again: ";
		cin >> number;
	}
	
	cout << "The binary is: ";
	binary(number);
	cout << endl;
	
	system("PAUSE");
	return 0;
}
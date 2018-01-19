#include <iostream>
#include <cmath>
using namespace std;

double stepen(int a, int b) {
	if (b > 0) {
		return a*stepen(a, b - 1);
	}
	else if (b < 0) {
		return (1 / (a*stepen(a, abs(b) - 1)));
	}
	else if (b == 0) {
		return 1;
	}
}

int main() {
	int a, b;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter another number: ";
	cin >> b;
	
	cout << a << " to the power of " << b << " is: " << stepen(a, b) <<" :)"<< endl;

	system("PAUSE");
	return 0;
}
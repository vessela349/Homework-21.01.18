#include <iostream>
using namespace std;

//tazi programa ima problemi s visual studio, no v code blocks raboti :/

int lenght(char text[],int counter = 0) {
	if ((int)text[counter] > 31 && (int)text[counter] < 127) {
		return lenght(text, counter + 1);
	}
	else {
		return counter;
	}
}
int upperCase(char smth[]){
    int upperCount = 0;
    for (int i = 0; i < lenght(smth); i++){
        if((int)smth[i] >= 65 && (int)smth[i] <= 90){
            upperCount++;
        }
    }
    return upperCount;
}

int lowerCase(char smth[]) {
    int lowerCount = 0;
    for (int i = 0; i < lenght(smth); i++){
        if((int)smth[i] >= 97 && (int)smth[i] <= 122){
            lowerCount++;
        }
    }
    return lowerCount;
}

int numbers(char smth[]){
    int numCount = 0;
    for (int i = 0; i < lenght(smth); i++){
        if((int)smth[i] >= 48 && (int)smth[i] <= 57){
            numCount++;
        }
    }
    return numCount;
}

int main() {
	char smth[10];
	cout<< "Please enter 10 letters and/or numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> smth[i];
	}

	cout<< "Upper case count: " << upperCase(smth) << endl;
	cout<< "Lower case count: " << lowerCase(smth) << endl;
	cout<< "Number count: " << numbers(smth) << endl;

	return 0;
}

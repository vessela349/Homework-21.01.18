#include <iostream>
using namespace std;

//i s tazi zadacha ne se razbirame vuv visual studio.

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
	int counter[95] = { 0 };
	counter[95]='\0';

	cout << "Enter your text: ";
	cin.getline(text, 100);

	for (int i = 0; i < lenght(text); i++) {
		for (int j = 0;j < 95;j++) {
            		if((int)text[i] - 32 == j){
                		counter[j] = counter[j] + 1;
            		}
		}
	}

	for (int i = 0; i < 95; i++) {
        	if(counter[i] != 0) {
           		cout<<"The symbol "<<(char)(i+32)<<" appears in your text "<<counter[i]<<" times."<<endl;
        	}
	}

	return 0;
}

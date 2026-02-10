#include <iostream>
#include <string>
using namespace std;



int countVowels(string str) {
	int count = 0;
	for (int i=0; i < str.length(); i++){
		char ch = tolower(str[i]);
		if (ch == 'a' || ch == 'e'|| ch == 'i'|| ch =='o'||ch=='u') {
			count++;
		}
	}
	return count;
}


int main() {
	string myString;
	cout<<"Enter a string: ";
	getline(cin, myString);
	cout<<"Number of vowels: "<<countVowels(myString)<<endl;
	return 0;
}

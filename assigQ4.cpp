#include <iostream>
#include <string>

using namespace std;


bool isVowel(char c) {
    string vowels = "aeiouAEIOU";
     
	     return vowels.find(c) != string::npos;
}


string removeVowels(string text) {
    string result = "";
    
    
    for (size_t i = 0; i < text.length(); ++i) {
        if (!isVowel(text[i])) {
            result += text[i];
        }
    }
    return result;
}

int main() {
    string sentence;
    
    cout << "Enter a sentence: ";
    
    getline(cin, sentence);

    string modified = removeVowels(sentence);
    
    cout << "Sentence without vowels: " << modified << endl;

    return 0;
}

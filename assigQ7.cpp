#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


vector<int> removeEvens(const vector<int>& input) {
    vector<int> result;
    for (size_t i = 0; i < input.size(); i++) {
    
        if (input[i] % 2 != 0) {
            result.push_back(input[i]);
        }
    }
    return result;
}

int main() {
    string userInput;
    cout << "Enter numbers separated by spaces: ";
    if (!getline(cin, userInput)) return 0;

    stringstream ss(userInput);
    vector<int> numbers;
    int temp;

    while (ss >> temp) {
        numbers.push_back(temp);
    }

    vector<int> odds = removeEvens(numbers);

    cout << "Odd numbers: ";
    for (size_t i = 0; i < odds.size(); i++) {
        cout << odds[i] << " ";
    }
    cout << endl;

    return 0;
}

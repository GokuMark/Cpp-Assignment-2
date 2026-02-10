#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function using traditional indexing for C++98 compatibility
vector<string> reverseStringsInList(vector<string> inputList) {
    vector<string> reversedList;
    
    for (size_t i = 0; i < inputList.size(); ++i) {
        string s = inputList[i];
        reverse(s.begin(), s.end());
        reversedList.push_back(s);
    }
    
    return reversedList;
}

int main() {
    vector<string> userStrings;
    int count;

    cout << "How many strings do you want to enter? ";
    cin >> count;
    cin.ignore();

    for (int i = 0; i < count; ++i) {
        string temp;
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, temp);
        userStrings.push_back(temp);
    }

    vector<string> result = reverseStringsInList(userStrings);

    cout << "\nReversed strings:\n";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << endl;
    }

    return 0;
}




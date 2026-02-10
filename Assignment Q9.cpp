#include <iostream>
#include <vector>
#include <numeric> 

using namespace std;


long long sum_list(const vector<int>& numbers) {
    
    return accumulate(numbers.begin(), numbers.end(), 0LL);
}

int main() {
    int count;
    cout << "How many integers would you like to sum? ";
    cin >> count;

    vector<int> numbers;
    cout << "Enter " << count << " integers separated by spaces or newlines:" << endl;

    for (int i = 0; i < count; ++i) {
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }

    long long result = sum_list(numbers);
    cout << "The total sum is: " << result << endl;

    return 0;
}

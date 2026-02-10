#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double getMedian(vector<int> nums) {
    if (nums.empty()) return 0.0;

    sort(nums.begin(), nums.end());

    size_t size = nums.size();
    if (size % 2 == 0) {
        return (nums[size / 2 - 1] + nums[size / 2]) / 2.0;
    } else {
        return static_cast<double>(nums[size / 2]);
    }
}

int main() {
    vector<int> userNumbers;
    int input;

    cout << "Enter integers (type any number or 'q' to finish):" << endl;

    
    while (cin >> input) {
        userNumbers.push_back(input);
    }

    if (userNumbers.empty()) {
        cout << "No numbers were entered." << endl;
    } else {
        cout << "\nYou entered " << userNumbers.size() << " numbers." << endl;
        cout << "The median value is: " << getMedian(userNumbers) << endl;
    }
return 0;
}

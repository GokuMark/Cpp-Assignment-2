#include <iostream>
#include <vector>


using namespace std;
double calculateAverage(const vector <int>& numbers) {
	if (numbers.empty()) {
		return 0.0;
	}
	
	double sum = 0;
	for (size_t i = 0; i < numbers.size(); i++) {
		sum += numbers[i];
	}
	return sum /numbers.size();
	
}
int main(){
	vector<int>myData;
	myData.push_back(10);
	myData.push_back(20);
	myData.push_back(30);
	
	cout<<"Average: "<<calculateAverage(myData)<< endl;
	return 0;
}

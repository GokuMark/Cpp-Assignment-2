#include <iostream>
#include <string>
using namespace std;


int addNumbers(int x, int y){
	return x+y;
}

int main(){
	int x,y;
	cout<<"Input of X: "<<endl;
	cin>>x;
	cout<<"Input of Y: "<<endl;
	cin>>y;
	cout<< "Sum"<<addNumbers(x,y) <<endl;
	return 0;
}
	


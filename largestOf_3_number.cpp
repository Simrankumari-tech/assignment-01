#include<iostream>
#include<climits>
using namespace std;
int main() {
	float num1 , num2 , num3;
	
	cin >> num1;
	
	cin >> num2;
	
	cin >> num3;
	float largest ;
	if ( num1>= num2 && num1>= num3){
		largest = num1;
	}
	else if ( num2 >= num3 && num2 >= num3){
		largest = num2;
	}
	else {
		largest = num3;
	}
	cout << largest << endl;
	
	return 0;
}
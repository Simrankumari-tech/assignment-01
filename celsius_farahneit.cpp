#include<iostream>
using namespace std;
	int main(){
		int far ,cel, step,initial_value, final_value ;
		cin >> initial_value >> final_value >> step;
	
	far = initial_value;
	while (far <= final_value){
		cel = 5 * (far - 32) / 9;
		
	cout << far  << "   " << cel << "\n";
	far = far + step;
	}
	return 0;
}
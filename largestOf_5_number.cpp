#include<iostream>
#include <climits>
using namespace std;
int main(){
	int n = 5;
	int largest, no,i;
	cin >> n;
	 largest = INT_MIN ;
	
	for ( i = 1; i<=5 ; i++){
		cin >> no;
		if(no>largest){
			largest = no;
		}
		
	}
	cout << largest ;
	return 0;
}
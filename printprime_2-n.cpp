#include<iostream>
using namespace std;
int main() {
	int number,n ,i;
	cin >> n;
	for (number = 2 ; number <= n; number ++){
		int i;
		for ( i=2 ; i< number ; i++){
			if (number % i == 0){
				break;
			}
		}
		if(i == number){
		cout << number << endl ;
		}
	}

	return 0;
}
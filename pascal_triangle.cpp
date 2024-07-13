1  
1	1  
1	2	1  
1	3	3	1  
1	4	6	4	1  
1	5	10	10	5	1



#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	
	for (int i = 1; i<= N; i++){
		int coef =1 ;
		
		for (int j = 1; j<=i ; j++){
			cout << coef << "	" ;
			coef =  coef * (i - j)/j ;
		}
		cout << endl ;
	}
	return 0;
}

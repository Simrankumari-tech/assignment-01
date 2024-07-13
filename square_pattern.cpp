1 2 3 4 5 
2 2 3 4 5 
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5



#include<iostream>
using namespace std;
int main () {
	int N;
	cin >> N;
	for (int i= 1; i<=N ; i++){
		for (int j=1 ; j<=N ; j++){
			cout << max (i, j)<< " " ;
		}
		 cout << endl;
	}
	return 0;
}

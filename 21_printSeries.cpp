// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
// Sample Input
// 10 
// 4
// Sample Output
// 5 
// 11 
// 14 
// 17 
// 23 
// 26 
// 29 
// 35 
// 38 
//41
#include <iostream>

using namespace std;

int main() {
	// 3n + 2, series ke n terms print krne hai
	int n, n2;
	cin >> n >> n2;
	int termsPrinted = 0;
	for (int i = 1; termsPrinted != n; ++i)
	{
		int term = 3 * i + 2;
		if (term % n2 != 0) {
			cout << term << " ";
			termsPrinted++;
		}
	}

	cout << endl;



	return 0;
}
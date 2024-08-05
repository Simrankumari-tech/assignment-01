#include <iostream>
using namespace std;

int digitSum(int n) {
	int ans = 0;
	while (n > 0) {
		int ld = n % 10;
		ans += ld;
		n /= 10;
	}
	return ans;
}

int primeFactorsDigitSum(int n) {
	int pf = 2;
	int prime_factors_DigitsSum = 0;
	while (n > 1) {
		// n mei jitne bhi pf ke multiple hai un sabko hata dunga
		while ((n % pf) == 0) {
			// cout << pf << " ";
			prime_factors_DigitsSum += digitSum(pf);
			n /= pf;
		}

		pf++;
	}
	return prime_factors_DigitsSum;
}

int main() {
	int n;
	cin >> n;

	int sum_of_digits = digitSum(n);
	int sum_of_pf_Digits = primeFactorsDigitSum(n);

	if (sum_of_digits == sum_of_pf_Digits) {
		cout <<  1;
	}
	else {
		cout << 0;
	}



	cout << endl;

	return 0;
}
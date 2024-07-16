#include <iostream>
using namespace std;
int main() {
    long long number;
    cin >> number;

    int oddSum = 0;
    int evenSum = 0;
    bool isOddPlace = true;

    while (number > 0) {
        int digit = number % 10;
        number /= 10;

        if (isOddPlace) {
            oddSum += digit;
        } else {
            evenSum += digit;
        }

        isOddPlace = !isOddPlace;
    }

	cout <<  oddSum <<endl;
    cout << evenSum <<endl;

    return 0;
}
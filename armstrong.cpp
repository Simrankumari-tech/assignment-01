#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n,arm=0,r,c,digits=0;
	cin >> n;
	c=n;
	while(c!=0){
		c=c/10;
		digits++;
	}
	c=n;
	while(n>0){
		r =n%10;
		arm = arm + pow(r,digits);
		n=n/10;
	}
	if(c==arm){
		cout << "true" ;
	}
	else{
		cout << "false" ;
	}
	return 0;
}
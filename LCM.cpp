#include <iostream>
using namespace std;
	void getLCM(int a, int b);
	int main(){
		int a,b;
		cin >> a>> b;
		getLCM(a,b);
		cout << endl;
		return 0;
}
void getLCM(int a, int b){
	int lcm;
	if(a>b){
		lcm=a;
	}
	else{
		lcm =b;
	}
	while(1){
		if(lcm %a==0 && lcm%b== 0){
			cout << lcm;
			break;
		}
		lcm++;
	}
}
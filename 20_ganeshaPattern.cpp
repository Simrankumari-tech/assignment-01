
// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *



#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	// first segment
	cout << "*";
	int spacescnt= n-((n+1)/2+1);
	for(int i=0; i<spacescnt; i++){
		cout << " ";
	}
	for(int stars=1;stars<=(n+1)/2; stars++){
		cout <<"*";
	}
	cout << endl;
	//second segment
	for(int rows=1;rows<=(n-3)/2 ; rows++){
		cout << "*";
	
		 spacescnt=n-((n+1)/2+1);
	for(int i=0; i<spacescnt; i++){
		cout << " ";
	}
	cout << "*";
cout << endl;
	}
	//third segment
	for(int stars= 1; stars<=n; stars++){
		cout <<"*";
	}
	cout << endl;
	//fourth segment
	for(int rows=1;rows<=(n-3)/2 ; rows++){
	
		 spacescnt=n-((n+1)/2+1);
		for(int i=0; i<spacescnt+1; i++){
		cout << " ";
	}
	cout <<"*";
	for(int i= 0; i<spacescnt;i++){
	cout << " ";
	}
	cout <<"*";
	cout << endl;
	}
	//fifth segment
	for(int stars= 1; stars<=(n+1)/2; stars++){
		cout << "*";
	}
	 spacescnt=n-((n+1)/2+1);
for(int i=0; i<spacescnt; i++){
		cout << " ";
	}
	cout <<"*";
	cout << endl;
	return 0;
}
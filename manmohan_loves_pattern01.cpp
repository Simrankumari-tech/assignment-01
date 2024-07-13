1
11
111
1001
11111
100001



#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for(int i=1;i<=num;i++){
        if(i%2 != 0){
            for(int j=1;j<=i;j++)cout<<1;
        }
        else{
             cout<<1;
             for(int j=2;j<=i-1;j++)cout<<0;
             cout<<1;
        }
        cout<<endl;
    }
    return 0;
}

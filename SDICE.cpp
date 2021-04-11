#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    long long int T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        int n1,n2,n3,n4;
        n1 = 20,n2 = 36,n3 = 51,n4 = 60;
        if(n <= 4){
            if(n == 1) cout<<n1<<endl;
            else if(n==2) cout<<n2<<endl;
            else if(n==3) cout<<n3<<endl;
            else if(n == 4) cout<<n4<<endl;
        }
        
        else{
            ll height = n/4;
            ll top_row = n%4;
            // cout<<"height : "<<height<<"top_row : "<<top_row<<endl;
            ll bottom_row_sum = 44;
            ll res;
            
            if( n %  4 == 1){
                res = (height * bottom_row_sum) + n1 + (3*4);
            }
            else if (n % 4 == 2){
                res = (height * bottom_row_sum) + n2 + (2*4);
            }
            else if (n % 4 == 3){
                res = (height * bottom_row_sum) + n3 + (4);
            }
            else{
                res = ((height-1) * bottom_row_sum) + n4;
            }
            cout<<res<<endl;
        }
    }
	return 0;
}

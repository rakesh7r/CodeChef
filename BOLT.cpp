#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        long double k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        long double res = k1 * k2 * k3 * v;
        res = 100/res;
        int r = (int)((res * 100) + 0.5);
        res = (double)r/100;
        if(res < 9.58)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // cout<<res<<endl;
    }
	return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main(){
    boost;
    ll T;
    cin>>T;
    while(T--){
        ll n,m,k;
        cin>>n>>m>>k;
        double a[n+2][m+2];
        for(ll i = 0 ; i <= n;i++)
            for(ll j = 0 ; j <= m; j ++)
                if(i == 0 or j == 0) 
                    a[i][j] = 0;
                else 
                    cin>>a[i][j];
       
        for(ll i = 0 ; i <= n;i++){
            double sum = 0;
            for(ll j = 0; j <= m ; j++){
               a[i][j] += sum;
               sum = a[i][j];
            }
        }         
        for(ll j = 0 ; j <= m; j++){
            double sum = 0;
            for(ll i = 0 ; i <= n ; i++){
                a[i][j] += sum;
                sum = a[i][j];
            }
        }
        ll ans = 0;
        ll minimum = min(m,n);
        for(ll len = 1; len <= minimum; len++)
            for( ll i = len ; i <= n; i++)
                for(ll j = len ; j <= m; j++)
                    if((a[i][j] + a[i-len][j-len] - a[i-len][j] - a[i][j - len] )/ (len*len) >= k)
                        ans++;
        cout<<ans<<endl;
    }
    return 0;
}

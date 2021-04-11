#include <bits/stdc++.h>
using namespace std;
int main() {
    
        int a,b,c;
        cin>>a>>b>>c;
        if(a<11 and a>0 and b<11  and b>0  and c<11  and c>0 and( a== b or a==c or b==c))
           cout<<"YES";
        else cout<<"NO";
	return 0;
}

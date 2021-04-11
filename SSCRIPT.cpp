#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        long int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool flag = false;
        long int count = 0;
        for(int i = 0; i < s.length();i++){
            if(s[i] == '*')
                count++;
            if(s[i] != '*')
                count = 0; 
            if(count == k){
                cout<<"YES"<<endl;
                flag = true;
                break;
            }
        }
        if(!flag)
            cout<<"NO"<<endl;
    }
	return 0;
}

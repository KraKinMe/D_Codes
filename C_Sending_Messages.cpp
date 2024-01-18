#include <bits/stdc++.h>
using namespace std;

#define int long long
#define modulo 1000000007

signed main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int T;
    cin>>T;
    while(T--){
        int N,F,a,b;
        cin>>N>>F>>a>>b;
        vector<int> M(N+1);
        bool ans=true;
        M[0]=0;
        // cout<<"Charge:";
        // cout<<"N="<<N<<" a="<<a<<" b="<<b<<endl;
        for(int i=1;i<N+1;i++){
            cin>>M[i];
            if(ans==false){
                continue;
            }
            int t=M[i]-M[i-1];
            int dec=t*a;
            if(dec>b){
                dec=b;
            }
            F=F-dec;
            // cout<<F<<" "<<dec<<" ";
            if(F<=0){
                ans=false;
            }
        }
        // cout<<endl;
        if(F<0){
            ans=false;
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	
	return 0;
}
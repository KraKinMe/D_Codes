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
        int n;
        cin>>n;
        string O,N;
        cin>>O;
        cin>>N;
        int ans=0;
        int rC=0;
        int aC=0;
        int O1=0;
        int N1=0;
        for(int i=0;i<n;i++){
            if(O[i]=='1'){
                O1++;
            }
            if(N[i]=='1'){
                N1++;
            }
            if(O[i]==N[i]){
                continue;
            }
            else if(O[i]=='1'){
                rC++;
            }
            else{
                aC++;
            }
        }
        if(O1==N1){
            ans=rC;
        }
        else if(O1>N1){
            ans=rC;
        }
        else{
            ans=aC;
        }
        cout<<ans<<endl;
    }
	
	return 0;
}
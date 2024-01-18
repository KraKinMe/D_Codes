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
        vector<vector<int>> V(4, vector<int>(2));
        set<int> S;
        bool x=true;
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                cin>>V[i][j];
                if(x){
                    S.insert(V[i][j]);
                }
                x=!x;
            }
        }

        vector<int> l1;
        int ans=1;
        for (auto it = S.begin(); it != S.end(); ++it) {
            int X = *it;
            for(int i=0;i<4;i++){
                if(V[i][0]==X){
                    l1.push_back(V[i][1]);
                }
            }
            if(l1.size()==2){
                ans*=abs(l1[0]-l1[1]);
                l1.clear();
            }
        }
        cout<<ans<<endl;

    }
	
	return 0;
}
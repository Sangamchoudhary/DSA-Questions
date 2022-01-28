#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef pair<long long,long long> pii;
#define mxSize 100001 
#define vpp vector<pll>
#define vll vector<ll>
#define vlli vector<lli>
#define takeINP(arr) for(auto &it : arr) cin>>it
#define mem(arr) memset(arr,-1,sizeof arr)
#define print(arr) for(auto &it:arr) cout<<it<<" "
#define pb push_back
#define ppb pop_back

void solve(){
    int n,k,mex; 
    cin>>n>>k>>mex;
    string ans;

    if(mex > k){
        cout<<"-1"<<endl<<endl;
        return;
    }

    int count = 0;
    for(int i=0;i<n;i++){
        if(count == mex){
            count = 0;
        }
        ans.push_back(count + '0');
        count++;
    }

    print(ans);
    
    cout<<endl<<endl;
}

int main() {
	int t = 1; cin>>t;
	while(t--) solve();
	return 0;
}
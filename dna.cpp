#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef pair<long long,long long> pii;
#define GODSPEED  ios:: sync_with_stdio(0);cin.tie(0);cout.tie(0);cout<<fixed;cout<<setprecision(15);
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
    int n; cin>>n;
    string str; cin>>str;
    
    int ansK = INT_MAX, ansM = INT_MIN;
    
    int j = 1;
    
    while(j < n){
        int i = j-1;
        int k = j;
        int fold = 0;
        while(i >=0 and k < n){
            if((str[i] == 'G' and str[k] == 'C') or (str[i] == 'C' and str[k] == 'G')){
                fold++;
            }else if((str[i] == 'T' and str[k] == 'A') or (str[i] == 'A' and str[k] == 'T')){
                fold++;
            }
            i--,k++;
        }
        if(fold > ansM){
            ansK = j; ansM = fold;
        }
        j++;
    }
    
    cout<<ansK<<" "<<ansM<<endl;
}

int main() {
    GODSPEED
	int t = 1; 
	while(t--) solve();
	return 0;
}
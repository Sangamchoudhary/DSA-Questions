#include<bits/stdc++.h>
using namespace std;

const int size = 1e5 + 1;
vector<vector<int> > hash(26,vector<int> (size,0));

int main(){
    string str; cin>>str;

    // Step 1 : To fill how many particualr alphabets are present in string (like no of a in string)
    for(int i=0;i<26;i++){
        // i -> alphabet
        for(int j=0;j<str.size();j++){
            // j -> character present in string
            char val = str[j] - 'a';
            if(val == i){
                hash[i][j]++;
            }
        }
    }

    // Step 2 : find the prefix sum at every row
    for(int i=0;i<26;i++){
        int prev = 0;
        for(int j=0;j<str.size();j++){
            hash[i][j] += prev;
            prev = hash[i][j];
        }
    }

    int n; cin>>n;

    while(n--){
        int lr,rr; cin>>lr>>rr; lr--,rr--;
        
        int odd = 0;

        // Step 4 : count the no of alphabets in the given range
        for(int i=0;i<26;i++){
            int count = hash[i][rr]  - hash[i][lr-1];
            if(count % 2) odd++;
        }

        // step 5 : If the odds no are more than 1 , then we can't make a plaindrome out of it
        if(odd > 1) cout<<"NO";
        else cout<<"YES";
    }

    return 0;
}
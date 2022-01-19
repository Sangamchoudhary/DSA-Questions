2 pass is needed 
Refer --> Pepcoding solution

4 condn 
----> +ve (ans) +ve
----> -ve (ans) -ve
----> +ve (ans) -ve
----> -ve (ans) +ve

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int ans = INT_MIN;
        int n = arr.size();
        int cp = 1;
        
        for(int i=0;i<n;i++){
            cp *= arr[i];
            ans = max(ans,cp);
            if(cp == 0){
                cp = 1;
            }
        }
        
        cp = 1;
        
        for(int i=n-1;i>=0;i--){
            cp *= arr[i];
            ans = max(ans,cp);
            if(cp == 0){
                cp = 1;
            }
        }        
        
        return ans;
    }
};
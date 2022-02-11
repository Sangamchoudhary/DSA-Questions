// Find all pair
class Solution {
public:
    int countKDifference(vector<int>& nums, int k){
        unordered_map<int,int> mp;
        
        int count = 0;
        
        for(auto it : nums){
            int op1 = it + k;
            int op2 = it - k;
            
            if(mp.find(op1) != mp.end()) count += mp[op1];
            if(mp.find(op2) != mp.end()) count += mp[op2];
            
            mp[it]++;
        }
        
        return count;
    }
};

// Find unique pair --> 
// we will iterate over the map instead of array to get rid of duplicates
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> st;
        int count=0;
        
        for(int i:nums) st[i]++;
        
        if(k==0){
            for(auto a:st){
                if(a.second>1) count++;
            }
        }
        else{
            for(auto b:st){
                if(st.count(b.first+k))count++;
            }
        }
        return count;
    }
}; 

// Binary search soln
class Solution {
public:
    int findPairs(vector<int>& arr, int k){
        int count=0;
        int n = arr.size();
        int i=0,j=1;
        sort(arr.begin(),arr.end());
        
        while(j < n){
            if(arr[j] - arr[i] == k){
                count++;
                i++ , j++;
                while(j < n and arr[j] == arr[j-1]) j++;
            }
            else if(arr[j] - arr[i] < k){
                j++;
            }
            else{
                i++;
                if(i == j) j++;
            }
        }
        
        return count;
    }
};
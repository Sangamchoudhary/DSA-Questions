Ques --> https://leetcode.com/problems/next-greater-element-ii/

Find next greater element in circular array ?

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        
        int k = n-1;
        while(k >= 0){
            st.push(k--);
        }
        
        vector<int> ans(n,-1);
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() and arr[st.top()] <= arr[i])  
                st.pop();

            if(st.size()) ans[i] = arr[st.top()];
            
            st.push(i);
            
        }
        
        return ans;
    }
};
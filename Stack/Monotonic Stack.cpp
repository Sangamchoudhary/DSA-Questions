Ques --> What is monotonous increase stack?

soln --> the elements in the an monotonous increase stack keeps an increasing ⬆ order.

The typical paradigm for monotonous increase stack:

    for(int i = 0; i < A.size(); i++){
    while(!in_stk.empty() && in_stk.top() > A[i]){
        in_stk.pop();
    }
    in_stk.push(A[i]);
    }

for next greater element 
1st way
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums){
            stack<int> s;
            unordered_map<int, int> m;
            for (int n : nums) {
                while (s.size() && s.top() < n) {
                    m[s.top()] = n;
                    s.pop();
                }
                s.push(n);
            }
            vector<int> ans;
            for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
            return ans;
        }

2nd way
    vector<int> nextGreaterElement(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size() , n = arr2.size();
        vector<int> ans;
        
        vector<int> fge(n,-1);
        stack<int> st;
        
        int lastElementIndex = n-1;
        st.push(lastElementIndex);
        
        for(int i=n-2;i>=0;i--){
            
            while(!st.empty() and arr2[st.top()] < arr2[i])
                st.pop();
            
            if(!st.empty()) fge[i] = arr2[st.top()];
            
            st.push(i);
        }
            
        for(int i=0;i<m;i++){
            int element = arr1[i];
            for(int j = 0;j<n;j++){
                if(element == arr2[j]){
                    ans.push_back(fge[j]);
                    break;
                }
            }
        }
        
        return ans;
    }



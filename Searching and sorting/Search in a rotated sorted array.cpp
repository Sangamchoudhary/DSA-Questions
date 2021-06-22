int binarySearch(vector<int> &nums,int target,int st,int en){
        while(st<=en){
            int mid=(st+en)/2;
            if(nums[mid]==target)
                return mid;
            else if(target>nums[mid])
                st=mid+1;
            else
                en=mid-1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int idx=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                idx=i;
                break;
            }
        }
        return 
        binarySearch(nums,target,idx,nums.size()-1)
        +
        binarySearch(nums,target,0,idx-1) 
        + 
        1;
    }
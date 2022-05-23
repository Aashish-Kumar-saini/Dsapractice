class NumArray {
public:
    vector<int> ans;
   
    NumArray(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i]= nums[i]+nums[i-1];
        }
        ans = nums;
    }
    
    int sumRange(int left, int right) {
            if(left==0)
                return ans[right];
         return ans[right]-ans[left-1];
    }
};

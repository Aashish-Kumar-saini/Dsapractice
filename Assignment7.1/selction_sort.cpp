class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int min,mindex=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {   
            min =nums[i];
            mindex=i;
            for(int j=i+1;j<nums.size();j++)
            {
                if(min>nums[j])
                {
                   min = nums[j];
                    mindex=j;
                }
                
            }
            swap(nums[i],nums[mindex]);
        }
        return nums;
        
    }
};

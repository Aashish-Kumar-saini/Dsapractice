class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int sum=INT_MIN;
        int cur_sum=0;
        for(int i=0;i<A.size();i++)
        {
          cur_sum= cur_sum+A[i];
            if(cur_sum>sum)
                sum=cur_sum;
            if(cur_sum<0)
                cur_sum=0;
        }
        return sum;
    }
};

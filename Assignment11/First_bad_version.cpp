class Solution {
public:
    int firstBadVersion(int n) {
        long long int low = 1 , high=n,ans=1,mid;
        
        if(n==1)
            return 1;
        while(low<high)
        {
            mid = (high +low)/2;
            bool x = isBadVersion(mid);
            if(x==true)
            {
                high = mid;
                ans= mid;
            }
            else if(x==false)
            {
                low =mid+1;
                ans = mid+1;
            }
        }
        return ans;
        
    }
};

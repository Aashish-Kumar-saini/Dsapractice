class Solution {
public:
    int trap(vector<int>& a) {
       int n= a.size();
        vector<int>max_height(n+1);
        for(int i=n-1;i>=0;i--)
        {
            max_height[i]=max(max_height[i+1],a[i]);
        }
        int ans=0;
        int left=0;
        for(int i=0;i<n;i++)
        {
            ans += max(min(left,max_height[i+1])-a[i],0);
            left=max(a[i],left);
        }
        return ans;
    }
};

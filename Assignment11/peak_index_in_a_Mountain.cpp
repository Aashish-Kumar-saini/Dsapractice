class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mid,low=0,high=arr.size(),ans=0;
        while(low<high)
        {  mid=(low+high)/2;
            
            if(arr[mid+1]>arr[mid])
            {
                
                ans = mid+1;
                low=mid+1;
            }
         else if(arr[mid-1]>arr[mid])
         {
           
             ans = mid-1;
             high=mid;
         }
         else
             return mid;
        }
        return ans;
        
        
    }
};

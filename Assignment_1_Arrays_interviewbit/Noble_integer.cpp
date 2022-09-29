int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n = A.size();
    int ans= -1;
    for(int i=0;i<A.size();i++)
    {  int x = upper_bound(A.begin(),A.end(),A[i])-A.begin();
        if(A[i]==n-x)
        {
            ans=1;
            break;
        }
    }
    return ans;
}

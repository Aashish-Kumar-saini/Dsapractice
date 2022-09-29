vector<int> Solution::findPerm(const string A, int B) {
    int x = B;
    int y= 1;
    vector<int>ans;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='I')
        {
            ans.push_back(y);
           y++;
           
        }
        if(A[i]=='D')
        {
            ans.push_back(x);
            x--;
            
        }
    }
    ans.push_back(x);
     return ans;
}

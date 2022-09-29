vector<int> count_sort(vector<int> &A)
{
    int n= *max_element(A.begin(),A.end());
    vector<int>a(n+1,0);
    for(int i=0;i<A.size();i++)
    a[A[i]]++;
    vector<int>c((int)A.size());
    int k=0;
    for(int i=0;i<a.size();i++)
    {
        while(a[i]!=0)
        {
            c[k++]=i;
            a[i]--;
        }
    }
    return c;
}

vector<int> Solution::solve(vector<int> &A) {
    for(int i=0;i<A.size();i++)
    {
        A[i]= A[i]*A[i];
    }
 return count_sort(A);

}

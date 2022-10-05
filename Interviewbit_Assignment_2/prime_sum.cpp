bool isprime(int a)
{
   
    vector<int>v;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            v.push_back(i);
            if(v.size()>2)
           return false;
        }
    }
   return true;
}   
vector<int> Solution::primesum(int A) {
       vector<int>ans;
    for(int i=2;i<A;i++)
    {
        for(int j=2;j<A;j++)
        {
            if((i+j)==A)
            {
                if(isprime(i) && isprime(j))
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
               
            }
        }
    }
    return ans;
}

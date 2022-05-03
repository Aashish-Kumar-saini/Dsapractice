#include <bits/stdc++.h>

using namespace std;
long aVeryBigSum(vector<long> ar)
{ long sum=0;int i;
    for(i=0;i<ar.size();i++)
    {
    sum=sum+ar[i];
    }
return sum;
}

int main()
{
   int n;
   long a;
   vector<long>ar;
   cin>>n;
   for(int i=0;i<n;i++)
   {    cin>>a;
       ar.push_back(a);
   } 
   long ans=aVeryBigSum(ar);
   cout<<ans;
   return 0;
}


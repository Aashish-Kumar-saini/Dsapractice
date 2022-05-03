#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(vector<int> ar,int n)
{int sum=0;

for(int i =0;i<n;i++)
{
  sum +=ar[i];  
}
return sum;
}

int main()
{   int n,a;
    vector<int>ar;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ar.push_back(a);
    }
    int ans= simpleArraySum(ar,n);
    cout<<ans;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,d;
    cin>>a>>n>>d;
    cout<<" your ap"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a+d<<"\t";
        a= a+d;
    }
}

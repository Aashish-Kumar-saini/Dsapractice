#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,sum=0;
    cin>>n;
    cout<<"SUM of digits \n";
    
    while(n>0)
    {   
        sum = sum+(n%10);
        n /= 10;

    }
    cout<<sum;
}

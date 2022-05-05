#include<bits/stdc++.h>
using namespace std;
void revArray(string&A)
{   int n =A.size() -1;
cout<<n;

    for(int i=0;i<A.size()/2;i++)
    {   if(i==n -i)
        break;
        //swap(A[i],A[n-i]);
        char temp ;
        temp = A[i];
        A[i]=A[n-i];
        A[n-i]= temp;

    }

}
int main()
{
    string A={"Hello world"};
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    cout<<"After reversing"<<endl;
    revArray(A);
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<"\t";
    }
return 0;
}

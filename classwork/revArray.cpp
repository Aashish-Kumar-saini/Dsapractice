#include<bits/stdc++.h>
using namespace std;
void revArray(vector<int>&A)
{   int n =A.size() -1;
    for(int i=0;i<A.size()/2;i++)
    {   if(i==n -i)
        break;
        swap(A[i],A[n-i]);

    }

}
int main()
{
    vector<int> A{3,1,2,3,5,6,7};
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

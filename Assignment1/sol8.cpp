#include <bits/stdc++.h>

using namespace std;



void miniMaxSum(vector<int> arr) {
    long sum=0;
    int min = INT_MAX,max = INT_MIN;
    for(int i=0;i<5;i++)
    {
        sum += arr[i];
        if(max<arr[i])
        max=arr[i];
        
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<sum-max<<" "<<sum-min;

}

int main()
{
    int a;
    vector<int>arr;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    miniMaxSum(arr);
    return 0;
}

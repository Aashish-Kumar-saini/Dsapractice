#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==target)
            return true;
    }
    
    return false;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    //returns true if target is present in A
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(A[i][j]==target)
            return true;
        }
    }
    
    return false;
}
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
    for(int i=0;i<A[0].size();i++)
    {
        if(A[r][i]==target)
        return true;
    }
    
    return false;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    //returns true if target is present in column c of A then returns true else return false;
    for(int i=0;i<A.size();i++)
    {
        if(A[i][c]==target)
        return true;
    }
    
    return false;
}


int main() {
    vector<vector<int>>A={{1,2,3} , {4,5,6},{7,8,9}};
    if(isTargetPresentIn2DVector(A,5))
    {
        cout<<"Yes in 2d array"<<endl;
    }
    else
    cout<<"not in 2d vector"<<endl;

    if(isTragetPresentInCol(A,4,2))
        cout<<"Yes"<<endl;
    else
        cout<<"Not in column "<<endl;
    if(isTragetPresentInCol(A,4,0))
        cout<<"Yes in column"<<endl;
    else
        cout<<"Not in column "<<endl;
    
    if(isTragetPresentInRow(A,1,2))
        cout<<"Yes"<<endl;
    else
        cout<<"Not in Row "<<endl;
    if(isTragetPresentInRow(A,1,0))
    cout<<"Yes in row"<<endl;
    else
    cout<<"Not in the row";
    return 0;
}

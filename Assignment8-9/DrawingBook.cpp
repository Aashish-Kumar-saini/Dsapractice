#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p)
 {

int start = n/2;
int page = p/2;
int last = start -page;
int ans= min(page,last);
return ans;
}

int main()
{int n,p;
    cin>>n>>p;
    int ans=pageCount( n,p);
    cout<<ans;
    return 0;
}

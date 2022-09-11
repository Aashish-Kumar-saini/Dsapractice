#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
int n= s.size();
string str="";
int i = 0, f=floor(sqrt(n)), k= ceil(sqrt(n));
if(k>f)f=f+1;
while(i<f)
{   str += s[i];
   int j= i+k;
   while(j<n)
   {
       str +=s[j];
       j +=k;
   }
   i++;
   str +=" ";
}

return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

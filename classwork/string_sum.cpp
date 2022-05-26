#include <bits/stdc++.h>
using namespace std;


string add(string a,string b){
    string sum = "";
    int m = a.size(),n = b.size();
    int i = m-1,j=n-1;
    int carry = 0;
    while(i>=0 && j>=0){
        sum += to_string(((carry) + (a[i] - '0')+(b[j] - '0'))%10);
        if(((carry) + (a[i] - '0')+(b[j] - '0'))>9){
            carry = ((carry) + (a[i] - '0')+(b[j] - '0'))/10;
        } 
        else carry = 0;
        i--;
        j--;
    }
    while(i>=0){
        sum += to_string(((carry) + (a[i] - '0'))%10);
        if(((carry) + (a[i] - '0'))>9){
            carry = ((carry) + (a[i] - '0'))/10;
        } 
        else carry = 0;
        i--;
    }
    while(j>=0){
        sum += to_string(((carry) + (b[j] - '0'))%10);
        if(((carry) + (b[j] - '0'))>9){
            carry = ((carry) +(b[j] - '0'))/10;
        } 
        else carry = 0;
        j--;
    }
    if(carry !=0) sum += (carry+'0');
    reverse(sum.begin(),sum.end());
    for(i = 0;i<sum.size();i++) cout<<sum[i];
    return sum;
}

int main(){
    if(add("123","234")!="357"){
        cout<<"wrong answer!1\n";
    }
    else cout<<"Correct 1 You are genius \n";
    if(add("123","937")!="1060"){
        cout<<"wrong answer!2\n";
    }
    else cout<<"Correct 2 You are genius \n";
    if(add("9123","236")!="9359"){
        cout<<"wrong answer!3\n";
    }
    else cout<<"Correct 3 You are genius \n";
}

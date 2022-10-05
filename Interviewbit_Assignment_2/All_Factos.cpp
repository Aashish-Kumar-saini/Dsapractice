vector<int> Solution::allFactors(int A) {
vector<int> res;
vector<int> temp;
for(int i=1;i<=sqrt(A);i++){
if(A%i==0){
res.push_back(i);
if(i!=sqrt(A)){
temp.push_back(A/i);}
}
}
int s=res.size();
int j=temp.size();

while(j>0){
res.push_back(temp[j-1]);
j--;
}
return res;
}

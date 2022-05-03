int birthdayCakeCandles(vector<int> candles) {
int count=1,t,n;
n=candles.size();
t=candles[0];
for(int i=1;i<n;i++)
{
 if(t<candles[i])
 {
     t=candles[i];
     count=1;
 }
 else {
 if(candles[i]==t)
 {count++;}
 }   
}
return count;
}

int Solution::reverse(int A) {
    int rev=0;
    while(A!=0)
    {    if(rev<INT_MIN/10||rev>INT_MAX/10)
        return 0;
        rev =  (A%10) +(rev*10);
        A /=10; 
    }
    return rev;
}

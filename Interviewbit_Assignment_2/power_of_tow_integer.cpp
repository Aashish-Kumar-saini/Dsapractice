int Solution::isPower(int A) {
    
    if(A==1)
        return 1;

    for(int x=2;x*x<=A;x++)
    {
        double y = log(A)/log(x);
        if(abs((int)y -y)<0.000001 ) 
            return 1;
    }
    return 0;

}


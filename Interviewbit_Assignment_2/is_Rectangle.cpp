int Solution::solve(int A, int B, int C, int D) {
    
    if(A==B&&C==D||A==C&& B==D||B==C&&D==A)
    return 1;
    else
    return 0;
}

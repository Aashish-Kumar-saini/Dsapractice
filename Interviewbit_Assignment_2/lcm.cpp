long Solution::solve(int A, int B) {
    long ans=0,hcf;
    hcf = __gcd(A,B);
    ans = A/hcf;
    ans *=B;
    return ans;
}

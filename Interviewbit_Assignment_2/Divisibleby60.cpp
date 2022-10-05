int Solution::divisibleBy60(vector<int> &A) {
    int n = A.size();
    if(n == 1 && A[0] == 0) return 1;
    if(n < 2) return 0;
    if(n == 2) {
        sort(A.begin(), A.end());
        if(A[1] < 6) return 0;
    }
    int checkFor10 = -1;
    for(int i = 0; i < n; i++) {
        if(A[i] == 0) {
            checkFor10 = 1;
            break;
        }
    }
    
    int checkFor2 = -1;
    for(int i = 0; i < n; i++) {
        if(A[i]%2 == 0&&A[i]!=0) {
            checkFor2 = 1;
            break;
        }
    }
    

    int checkFor3 = -1;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += A[i];
    }
    if(sum%3 == 0) {
        checkFor3 = 1;
    } 
    if(checkFor3 == 1 && checkFor2 == 1 && checkFor10 == 1) return 1;

    return 0;
}


string Solution::convertToTitle(int A) {
    string s="";
    while(A>0)
    {
        s=(char)('A'+(A-1)%26)+s;
        A=(A-1)/26;
    }return s;
}

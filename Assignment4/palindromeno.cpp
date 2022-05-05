class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        long rev=0;
        while(y>0)
        {
            rev =(y%10)+ (rev*10);
            y /=10;
        }
        if(rev==x)
            return true;
    return false;
    }
};

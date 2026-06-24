class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rem;
        int orii=x;
        long long reverse=0;
        while(x!=0){
rem=x%10;
reverse=reverse*10+rem;
x=x/10;
        }
    if(orii==reverse){
    return true;
    }
   return false;
    }
};
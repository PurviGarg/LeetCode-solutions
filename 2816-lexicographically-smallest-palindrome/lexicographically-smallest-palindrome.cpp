class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
while(left<right){
    if(s[left]==s[right]){
        left++;
        right--;
    }
   else {
   char ch= min(s[left],s[right]);
            if(ch==s[left]){
                s[right]=ch;
            }
            else{
                s[left]=ch;
            }}
   
}  return s;
    }
};
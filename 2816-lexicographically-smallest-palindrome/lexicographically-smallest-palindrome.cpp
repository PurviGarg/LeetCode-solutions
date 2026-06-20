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
           s[left]=ch;
           s[right]=ch;
           }
   
}  return s;
    }
};
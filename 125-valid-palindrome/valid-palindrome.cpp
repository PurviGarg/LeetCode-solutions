class Solution {
public:
    bool isPalindrome(string s) {
       string ans;

       for( char ch:s){
        if (isalnum(ch)){
            ans+=tolower(ch);
        }
       }
       int n=ans.size();
int left=0;
int right=n-1;
while(right>left){
    if(ans[left]==ans[right]){
        left++;
        right--;
    }
    else{
        return false;
    }
}
return true;
    }
};
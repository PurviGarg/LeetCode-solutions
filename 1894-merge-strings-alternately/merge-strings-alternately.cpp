class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string ans="";
        int a=word1.size();
        int b=word2.size();
        int c = max(a,b);
     for(int i=0;i<c;i++){
        if(i<a){
            ans+=word1[i];
        }
         if(i<b){
            ans+=word2[i];
        }
     }
return ans;
    }
};
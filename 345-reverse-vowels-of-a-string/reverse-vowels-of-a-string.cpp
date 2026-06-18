class Solution {
public:
 bool isvowel(char ch){
            return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
        }
    string reverseVowels(string s) {
       
        int left=0;
        int right=s.size()-1;

while(right>left){
    if(isvowel(s[left]) && !isvowel(s[right])){
        right--;
    }
     else if(!isvowel(s[left]) && !isvowel(s[right])){
        left++;
        right--;
    }
    else if(!isvowel(s[left]) && isvowel(s[right])){
        left++;
        
    }
     else{
        swap(s[left],s[right]);
        left++;
        right--;
     }

}
return s;
    }
};
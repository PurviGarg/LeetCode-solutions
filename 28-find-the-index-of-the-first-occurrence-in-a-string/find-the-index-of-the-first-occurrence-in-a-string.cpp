class Solution {
public:
    int strStr(string haystack, string needle) {
      int posi=haystack.find(needle);
      if(posi==string::npos){
        return -1;

      }
      else{
        return posi;
      }
    }
};
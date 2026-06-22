class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
       vector<int> ans; 
        int j=0;
        int i=0;
        for(int i=0;i<n;i++){
            int dis= INT_MAX;
            for(int j=i;j<n;j++){
                if(s[j]==c){
                  dis=abs(j-i);
                  break;
                }
            }
            for(int j=i;j>=0;j--){
                if(s[j]==c){
                    dis=min(dis,abs(i-j));
                    break;
                }
            }
            ans.push_back(dis);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
    vector<int> leftsum;
    int n=nums.size();
    int ls=0,rs=0;
    for(int i=0;i<n;i++){
       leftsum.push_back(ls);
       ls=ls+nums[i];
    }
        vector<int> rightsum;
        for(int i=n-1;i>=0;i--){
           rightsum.push_back(rs);
       rs=rs+nums[i];
        }
reverse(rightsum.begin(),rightsum.end());
vector<int> ans;
for(int p=0;p<n;p++){
    ans.push_back(abs(leftsum[p]-rightsum[p]));
}

return ans;
    }
};
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=1;
        while(right<n){
            if(nums[left]==nums[right]){      
              nums[left]*=2;
              nums[right]=0;
            }
            left++;
            right++;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
               ans.push_back(nums[i]);
            }
        }
        while(ans.size()<n){
ans.push_back(0);
        }
        return ans;
    }
};
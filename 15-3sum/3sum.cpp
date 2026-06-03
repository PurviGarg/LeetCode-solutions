class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            int left=i+1;
            int right=nums.size()-1;
            while(right>left){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum<0){
                    left++;

                }
                else{
                    right--;
                }
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};
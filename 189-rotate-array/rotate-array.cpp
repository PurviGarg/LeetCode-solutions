class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    vector<int> ans(nums.size());
    k=k%nums.size();
        int left=0;
         for(int i=nums.size()-k;i<nums.size();i++){
        ans[left++]=nums[i];
      }
      for(int i=0;i<nums.size()-k;i++){
         ans[left++]=nums[i];
      }
     
      nums=ans;
    }
};
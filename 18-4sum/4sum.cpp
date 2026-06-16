class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int n=nums.size();  
      vector<vector<int>>ans;
      sort(nums.begin(),nums.end());
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int left=j+1;
            int right=n-1;
            while(right>left){
                long long sum;
             sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[right]+(long long)nums[left];
            if(sum==target){
                ans.push_back({nums[i],nums[j],nums[right],nums[left]});
                left++;
                right--;
            }
            else if(sum<target){
                left++;
            }
else{
    right--;
}
}

        }
      }
      sort(ans.begin(),ans.end());
      ans.erase(unique(ans.begin(),ans.end()),ans.end());
      return ans;
    }
};
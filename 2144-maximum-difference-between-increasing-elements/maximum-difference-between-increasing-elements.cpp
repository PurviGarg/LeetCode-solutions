class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min=nums[0];
        int maxdiff=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
            else{
                maxdiff=max(maxdiff,nums[i]-min);
            }
            if(maxdiff==0){
                maxdiff=-1;
            }
        }
        return maxdiff;
    }
};
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
       
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
            ans.push_back(nums[i]);
            }
        }
        // sort(ans.begin(),ans.end(),greater<int>());
       for(int i=0;i<nums.size();i++){ 
        if(nums[i]==pivot){
         ans.push_back(pivot);}}

 vector<int>ans1;
 for(int j=0;j<nums.size();j++){
            if(nums[j]>pivot){
               ans1.push_back(nums[j]); 
            }
        }
        // sort(ans1.begin(),ans1.end());
ans.insert(ans.end(),ans1.begin(),ans1.end());
return ans;
    }
};
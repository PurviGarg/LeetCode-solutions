class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size(); 
        vector<vector<int>> ans;
        int cs=nums[0]+nums[1]+nums[2];
     for(int i=0;i<n;i++){
          int left=i+1;
        int right=n-1;
        while(right>left){
        int sum=nums[i]+nums[left]+nums[right];
       if(abs(target-sum)<abs(target-cs)){
        cs=sum;
       
       }
      else if(sum<target){
        left++;
      }
      else{
        right--;
      }

      } 
       }
return cs;

    }
};
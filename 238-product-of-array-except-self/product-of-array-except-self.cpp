class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
    
        vector<int> result(n);
    int total=1;
    int zerocount=0;
      for(int i=0;i<n;i++){
        if(nums[i]==0){
           zerocount++;
        }
        else{
            total=total*nums[i];
        }
      }
        for(int j=0;j<n;j++){
           if(zerocount>1){
            result[j]=0;

           }
           else if(zerocount==1){
if(nums[j]==0){
    result[j]=total;
}
else{
    result[j]=0;
}
           }
           else{
            result[j]=total/nums[j];
           }
        }
        return result;
    }
};
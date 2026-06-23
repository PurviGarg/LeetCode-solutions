class NumArray {
public:
vector<int> nums;
    NumArray(vector<int>& nums) {
       this->nums=nums;
    } 
    int sumRange(int left, int right) {
        int sum=0;
      while(left!=right+1){
        sum=sum+nums[left];
        left++;
      }  
      return sum;
    }
};
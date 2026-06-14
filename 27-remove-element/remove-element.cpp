class Solution {
public:
    int removeElement(vector<int>& nums, int vall) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==vall){
                nums.erase(nums.begin() + i );
                i--;
            }
            else{
                cout<<nums[i];
k++;
            }

        }
        return k;
    }
};
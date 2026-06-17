class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n=plants.size();
        int o1=capacityA;
        int o2=capacityB;

        int left=0;
        int right=n-1;
        int refill=0;

while(right>left){
        if(capacityA>=plants[left]){
            capacityA = capacityA-plants[left];
            left++;
        }
        else{
            refill++;
            capacityA=o1;
                        capacityA -= plants[left];

             left++;
        }
        if(capacityB>=plants[right]){
            capacityB = capacityB - plants[right];
            right--;
        }
        else{
            refill++;
            capacityB=o2;
            capacityB -= plants[right];
             right--;
        }
        if(left == right){
        if(max(capacityA,capacityB)<plants[left]){
            refill++;
        }
        }}

return refill;
    }
};
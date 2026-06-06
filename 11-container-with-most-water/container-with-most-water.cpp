class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=0;
        int left=height.size()-1;
        int maxarea;
        int maxi=0;
        while(left>right){
maxarea=min(height[right],height[left])*(left-right);
maxi=max(maxi,maxarea);
if(height[left]>height[right]){
    right++;
}
else{
    left--;
}


        }return maxi;








//         int maxarea;
//         int maxi=0;
//         for(int i=0;i<height.size();i++){
//             for(int j=i+1;j<height.size();j++){
// maxarea = min(height[i],height[j])*(j-i);
// maxi=max(maxi,maxarea);

//             }
//         }return maxi;
    }
};
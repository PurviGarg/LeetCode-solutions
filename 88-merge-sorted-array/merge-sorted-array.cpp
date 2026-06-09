class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int>a(nums1.begin(),nums1.begin()+m);
       a.insert(a.end(),nums2.begin(),nums2.end());
       sort(a.begin(),a.end());
      nums1=a;
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<int>merged(m+n);
        merge(nums1.begin(), nums1.end(), nums2.begin(),nums2.end(),merged.begin());
        int total = m+n;
        if(total%2!=0){
            return merged[total/2];
        }else{
            return (merged[(total/2)-1]+merged[total/2])/2.0;
        }
        
    }
};
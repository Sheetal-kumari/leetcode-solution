class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int left = 0, right = nums.size()-1, count = 0;
        while(left<right){
            int curr_sum = nums[left]+ nums[right];

            if(curr_sum==k){
                count++;
                left++;
                right--;
            }else if(curr_sum<k){
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
};
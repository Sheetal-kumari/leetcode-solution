class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st =0;
        int end =n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if (nums[mid] == target) return mid;
                if(nums[st]<= nums[mid]){//leftSort
                  if (nums[mid]>=target && target>=nums[st]){
                    end= mid-1;
                  }  else{//right sort
                    st = mid+1;
                  }
                }
                else{//right sort
                if (nums[mid]<=target && target<=nums[end]){//right sort
                st = mid+1;
                }else{//left sort
                end = mid-1;

                }

                }
        }
        return -1;
        
    }
};
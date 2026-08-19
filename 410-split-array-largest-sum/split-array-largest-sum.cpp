class Solution {
public:
bool isValid(vector<int>& nums, int maxStudent,int maxPage){
    int studentCount=1, currPage=0;

    for(int pages:nums){
        if(currPage+pages <=maxPage){
            currPage+=pages;
        }else{
            studentCount++;
            currPage=pages;

            if(studentCount>maxStudent){
                return false;
            }
        }
    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        if(nums.size()<k) return -1;

        int st = *max_element(nums.begin(), nums.end());
        int end = accumulate(nums.begin(), nums.end(), 0);
        int ans = end;

        while(st<=end){
            int mid = st+(end-st)/2;

            if(isValid(nums, k, mid)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans ;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
     int left = 0, right = n-1;
     int max_water = 0, current_water=0;
     while(left!=right){
        int width = right-left;
        int length = min(height[left],height[right]);
        current_water = width*length;
        max_water = max(max_water,current_water);
        if(height[left]<=height[right]) left++;
         else right--;
     }
     return max_water;
        
    }
};
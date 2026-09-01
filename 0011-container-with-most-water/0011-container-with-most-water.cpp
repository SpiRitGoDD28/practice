class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0, right=n-1;
        int width=0;
        int area=INT_MIN;
        while(left<right){
            width=min(height[left], height[right]) * (right-left);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
            area=max(area, width);
        }
        return area;
    }
};
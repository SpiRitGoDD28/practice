class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int area=0, maximumArea=0;
        while(left<right){
            area=min(height[left], height[right]) * (right-left);
            maximumArea=max(area, maximumArea);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maximumArea;
    }
};
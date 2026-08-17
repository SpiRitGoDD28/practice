class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            if(1LL*nums[right]*nums[right]>1LL*nums[left]*nums[left]){
                ans.push_back(nums[right]*nums[right]);
                right--;
            }
            else{
                ans.push_back(nums[left]*nums[left]);
                left++;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    
    }
};
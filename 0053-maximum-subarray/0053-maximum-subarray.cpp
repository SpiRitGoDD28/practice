class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int largestSum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>largestSum){
                largestSum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return largestSum;
    }
};
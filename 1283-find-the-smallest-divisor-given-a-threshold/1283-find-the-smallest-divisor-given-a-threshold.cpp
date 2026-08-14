class Solution {
public:
    int checkDivisor(vector<int>& nums, int threshold, int divisor){
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=(nums[i]+divisor-1)/divisor;
        }
        if(sum<= threshold) return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int mini=INT_MAX, maxi=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++){
            mini=min(mini, nums[i]);
            maxi=max(maxi, nums[i]);
        }  
        int low=1, high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(checkDivisor(nums, threshold, mid)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;

        }  
        return ans;
    }
};
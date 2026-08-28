class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n= nums.size();
        int left=0, right=0;
        long long cost=0; long long sum=0; int freq=0;
        sort(nums.begin(), nums.end());
        while(right<n){
            sum+=nums[right];
            right++;
            cost=(long long) nums[right-1]*(right-left)-sum;
            while(cost>k){
                sum-=nums[left];
                left++;
                cost=(long long) nums[right-1]*(right-left)-sum;
            }
            if(cost<=k){
                freq=max(freq, right-left);
            }
        }
        return freq;
    }
};
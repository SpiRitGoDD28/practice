class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(auto& digit: nums){
            mpp[digit]++;
            if(mpp[digit]>1){
                return true;
            }
        }
        return false;
        /*for(long long i=0;i<nums.size();i++){
            for(long long j=i+1; j<nums.size();j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;*/
    }
};
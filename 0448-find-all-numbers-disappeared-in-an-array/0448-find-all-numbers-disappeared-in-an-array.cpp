class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
           int numIndex= abs(nums[i])-1;
           nums[numIndex]=-abs(nums[numIndex]);
        }
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
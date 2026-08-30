class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        long long largest=LLONG_MIN;
        long long second=LLONG_MIN;
        long long third=LLONG_MIN;
        long long smallest=LLONG_MAX;
        long long secondSmallest=LLONG_MAX;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>largest){
                third=second;
                second=largest;
                largest=nums[i];
            }
            else if(nums[i]>second){
                third=second;
                second=nums[i];
            }
            else if(nums[i]>third){
                third=nums[i];
            }
            if(nums[i]<smallest){
                secondSmallest=smallest;
                smallest=nums[i];
            }
            else if(nums[i]<secondSmallest){
                secondSmallest=nums[i];
            }
        }
        int prod=max(largest*second*third, largest*smallest*secondSmallest);
        return prod;
    }
};
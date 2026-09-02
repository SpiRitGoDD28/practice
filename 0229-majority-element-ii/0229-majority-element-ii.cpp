class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1=0, count2=0;
        int major1=0, major2=0;
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(count1==0 && nums[i]!=major2){
                count1=1;
                major1=nums[i];
            }
            else if(count2==0 && nums[i]!=major1){
                count2=1;
                major2=nums[i];
            }
            else if(nums[i]==major1){
                count1++;
            }
            else if(nums[i]==major2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }

        }
        count1=0, count2=0;
        for(int i=0; i<n; i++){
            if(nums[i]==major1){
                count1++;
            }
            else if(nums[i]==major2){
                count2++;
            }
        }
        if(count1>n/3){
            ans.push_back(major1);
        }
        if(count2>n/3){
            ans.push_back(major2);
        }
        return ans;
    }
};
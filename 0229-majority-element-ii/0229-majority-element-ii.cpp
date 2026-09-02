class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0, cnt2=0;
        int major1=0, major2=0;
        for(int i=0; i<n; i++){
            if(cnt1==0 && major2!=nums[i]){
                cnt1=1;
                major1=nums[i];
            }
            else if(cnt2==0 && major1!=nums[i]){
                cnt2=1;
                major2=nums[i];
            }
            else if(major1==nums[i]) cnt1++;
            else if(major2==nums[i]) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int>ans;
        cnt1=0, cnt2=0;
        for(int i=0; i<n; i++){
            if(major1==nums[i]) cnt1++;
            else if(major2==nums[i]) cnt2++;    
        }
        if(cnt1>n/3) ans.push_back(major1);
        if(cnt2>n/3) ans.push_back(major2);
        return ans;
    }
};
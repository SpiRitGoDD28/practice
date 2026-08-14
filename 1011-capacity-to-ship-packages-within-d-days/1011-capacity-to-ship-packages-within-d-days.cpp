class Solution {
public:
    int checkCapacity(vector<int>& weights, int days, int capacity){
        int sum=0, daysNeeded=1;
        for(int i=0;i<weights.size();i++){
            if(sum+ weights[i]>capacity){
                daysNeeded++;
                sum= weights[i];
            }
            else{
                sum+=weights[i];
            }
        }
        return daysNeeded<=days;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxi=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi, weights[i]);
            sum+=weights[i];
        }
        int low= maxi, high=sum, ans=0;
        while(low<=high){
            int mid= (low+high)/2;
            if(checkCapacity(weights, days, mid)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};
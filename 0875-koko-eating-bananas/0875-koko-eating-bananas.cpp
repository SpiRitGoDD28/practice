class Solution {
public:
    int maxiCount(vector<int> &piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi, piles[i]);
        }
        return maxi;
    }

    long long totalHours(vector<int> &piles, int h){
        long long totalH=0;
        for(int i=0;i<piles.size();i++){
            totalH+= ceil((double)piles[i]/ (double)h);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=maxiCount(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long totalH= totalHours(piles, mid);
            if(totalH<=h){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};
class Solution {
public:
    int bouquet(vector<int>& bloomDay,int day, int m, int k){
        int count=0, nbou=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                nbou+= count/k;
                count=0;
            }
            /*if(nbou>=m) return true;
            else return false;*/ 
        }
        nbou+= count/k;
        return nbou>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int mini=INT_MAX, maxi=INT_MIN;
        long long val= (long long)m*k;
        for(int i=0;i<n;i++){
            mini=min(mini, bloomDay[i]);
            maxi=max(maxi, bloomDay[i]);
        }
        int low=mini, high=maxi; 
        if(val>n) return -1;
        int ans=0;
        while(low<=high){
            int mid= (low+high)/2;
            if(bouquet(bloomDay, mid, m, k)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

        
    }
};
class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        long long sum=0;
        for(int i=0; i<n; i++){
            unordered_map<char, int> mpp;
            for(int j=i;j<n;j++){
                int mostF=INT_MIN;
                int leastF=INT_MAX;
                mpp[s[j]]++;
                for(auto it: mpp){
                    mostF=max(mostF, it.second);
                    leastF=min(leastF, it.second);
                }
                sum+=mostF-leastF;
                
            }
        }
        return sum;
    }
};
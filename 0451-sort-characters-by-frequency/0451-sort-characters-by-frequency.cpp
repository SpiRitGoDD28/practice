class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        for(auto& ch: s){
            mpp[ch]++;
        }
        string ans;
        vector<pair<char, int>> v;
        for(auto& x: mpp){
            v.push_back(x);
        }
        
        sort(v.begin(), v.end(), [](auto a, auto b){
            return a.second>b.second;
        });
        for(auto& x: v){
            for(int i=0;i<x.second;i++){
            ans+=x.first;
            }
        }
    return ans;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mpp;
        for(auto& ch:strs){
            string words=ch;
            sort(words.begin(),words.end());
            mpp[words].push_back(ch);
        }
        vector<vector<string>>ans;
        for(auto& s:mpp){
            ans.push_back(s.second);
        }
        return ans;
    }
};
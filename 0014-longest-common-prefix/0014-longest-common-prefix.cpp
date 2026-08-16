class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int shortestStr=INT_MAX;
        for(int i=0; i<strs.size();i++){
            shortestStr=min(shortestStr, (int)strs[i].size());
        }
        for(int i=0; i<shortestStr;i++){
            for(int j=1; j<strs.size();j++){
                if(strs[0][i]!=strs[j][i]){
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};
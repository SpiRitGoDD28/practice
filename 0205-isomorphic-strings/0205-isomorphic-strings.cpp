class Solution {
public:
    bool isIsomorphic(string s, string t) {
        /*vector<int>sIndex(260,0);
        vector<int>tIndex(260,0);
        for(int i=0; i<s.size();i++){
            if(sIndex[s[i]]!=tIndex[t[i]]){
                return false;
            }
            sIndex[s[i]]=i+1;
            tIndex[t[i]]=i+1;
        }
        return true;*/
        unordered_map<char, char> mpp;
        for(int i=0;i<s.size();i++){
            char charS= s[i];
            char charT= t[i];
            if(mpp.count(charS)){
                if(mpp[charS]!=charT){
                    return false;
                }
            }
            else{
                for(auto& pair: mpp){
                    if(pair.second==charT){
                        return false;
                    }
                }
                mpp[charS]=charT;
            }
        }
        return true;
    }
};
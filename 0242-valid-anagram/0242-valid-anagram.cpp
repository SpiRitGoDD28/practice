class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char, int>sMap;
        unordered_map<char, int>tMap;
        sMap.reserve(26);
        tMap.reserve(26);
        for(auto ch: s){
            sMap[ch]++;
        }
        for(auto ch: t){
            tMap[ch]++;
        }
        if(sMap!=tMap){
            return false;
        }

        return true;

    }
};
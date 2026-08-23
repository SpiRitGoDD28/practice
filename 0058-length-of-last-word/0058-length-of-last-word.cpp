class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        //string lastWord;
        int end=0;
        int i=n-1;
            while(i>=0 && s[i]==' '){
                i--;
            }
            end=i;
            
            while(i>=0 && s[i]!=' '){
                i--;
            }
            //lastWord=s.substr(i+1, end-i);
        

        //return lastWord.size();
        return end-i;
    }
};
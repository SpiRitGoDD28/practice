class Solution {
public:
    int midPoint(string s, int left, int right){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int end=0;
        for(int centre=0; centre<n; centre++){
            int odd= midPoint(s, centre, centre);
            int even= midPoint(s, centre, centre+1);
            int maxLen= max(odd, even);
            if(maxLen>end-start){
                start= centre-(maxLen-1)/2;
                end= centre+maxLen/2;
            }
        }
        
        
        return s.substr(start, end-start+1);
        
    }
};
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
        int start=0, end=0;
        for(int mid=0; mid<n; mid++){
            int odd= midPoint(s, mid, mid);
            int even= midPoint(s, mid, mid+1);
            int maxLen= max(odd, even);
            if(maxLen> end-start){
                start= mid-(maxLen-1)/2;
                end= mid+maxLen/2;
            }
        }
        return s.substr(start, end-start+1);
    }
};
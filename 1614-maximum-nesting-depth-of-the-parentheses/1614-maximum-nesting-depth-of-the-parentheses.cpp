class Solution {
public:
    int maxDepth(string s) {
      int count=0;
      int maxCount=INT_MIN;
      for(int i=0; i<s.size();i++){
        if(s[i]=='(') count++;
        else if(s[i]==')') count--;
        maxCount=max(maxCount,count);
      }
      return maxCount;
    }
};
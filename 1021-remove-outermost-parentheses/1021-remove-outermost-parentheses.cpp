class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int count=0;
        string ans;
        for(int i=0;i<n;i++){
            /*if(count==0){
                count++;
            }
            else{
                if(s[i]=='('){
                    count++;
                    ans.push_back(s[i]);
                }
                else{
                    count--;
                    if(count==0){
                        continue;
                    }
                    ans.push_back(s[i]);
                } 
                
            }*/
            if(count==0){
                count++;
            }
            else{
                if(s[i]=='('){
                    ans.push_back(s[i]);
                    count++;
                }
                else{
                    count--;
                    if(count==0) continue;
                    ans.push_back(s[i]);
                }                
            }
        }
        return ans;
    }
};
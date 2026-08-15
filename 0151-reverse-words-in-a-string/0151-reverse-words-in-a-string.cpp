class Solution {
public:
    string reverseWords(string s) {
        //brute force
        /*vector<string> words;
        string single;
        int n=s.size();
        int i=0;
        while(i<n){
            if(s[i]==' '){
                i++;
            }
            else{
                for(i;i<n && s[i]!=' ';i++){
                    single.push_back(s[i]);
                }
                words.push_back(single);
                single.clear();
            }
        }
        reverse(words.begin(), words.end());
        string ans;
        for(int i=0;i<words.size();i++){
            ans+= words[i];
            if(!ans.empty()) ans+=' ';
        }
       
        ans.pop_back();
        return ans;*/
        //Optimal

        reverse(s.begin(),s.end());
        int n=s.size();
        int i=0;
        string ans;
        while(i<n){
            while(s[i]==' '){
                i++;
            }
            if(i==n) break;
            string words;
            while(i<n && s[i]!=' '){
                words+=s[i];
                i++;
            }
            reverse(words.begin(),words.end());
            ans+=words;
            if(!ans.empty()) ans+=' ';
        }
        ans.pop_back();
        return ans;
        
    }
};
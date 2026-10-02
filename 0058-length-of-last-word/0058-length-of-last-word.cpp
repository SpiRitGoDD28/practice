class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int i=n-1, end=0;
        while(i>=0 && s[i]==' '){
            i--;
        }
        end=i; //last char after removing spaces
        while(i>=0 && s[i]!=' '){ //this loop is for finding the starting char 
            i--;                  //of last word
        }
        return end-i;  //end-i+1-1  as after space i+1 and Currlen= end-start+1
    }
};
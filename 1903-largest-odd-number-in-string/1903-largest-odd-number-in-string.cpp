class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int left=0, right=n-1;
        
        while(right>=0 && (num[right] - '0') %2==0){
            right--;
        }
        if(right==-1){
            return "";
        }
        num=num.substr(left, right-left+1); 
        return num;
        
        
    }
};
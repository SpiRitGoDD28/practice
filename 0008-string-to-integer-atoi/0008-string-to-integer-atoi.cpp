class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        long long num=0;
        int sign=1;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i==n){
            return 0;
        }
        if(s[i]=='+'){
            i++;
        }
        else if(s[i]=='-'){
            sign=-1;
            i++;
        }
        while(i<n && isdigit(s[i])){
            int digit=s[i] - '0';
            num=num*10+digit;
            if(num*sign>INT_MAX){
                return INT_MAX;
            }
            if(num*sign<INT_MIN){
                return INT_MIN;
            }
            i++;
        }
        return num*sign;

    }
};
    
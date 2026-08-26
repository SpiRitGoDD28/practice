class Solution {
public:
    bool checkDivisibility(int n) {
        int Digitsum=0, prod=1, ogN=n; 
        while(n>0){
            int digit=n%10;
            n=n/10;
            Digitsum+=digit;
            prod*=digit;
        }
        if(prod==0 && Digitsum==0) return false;
        int sum=Digitsum+prod;
        if(ogN%sum==0){
            return true;
        }
        return false;
    }
};
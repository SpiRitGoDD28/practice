class Solution {
public:
    int maxProduct(int n) {
        int first=INT_MIN;
        int second=INT_MIN;
        while(n>0){
            int digit=n%10;
            if(digit>second && digit> first){
                second=first;
                first=digit;
            }
            else if(digit>second){
                second=digit;
            }
            n=n/10;
        }
        return first*second;
    }
};
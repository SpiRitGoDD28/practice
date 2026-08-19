class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int index=0;
        for(int i=0;i<n;i++){
            int count=0;
            char words= chars[i];
            while(i<n && chars[i]==words){
                count++;
                i++;
            }
            if(count==1){
                chars[index++]=words;
            }
            else{
                chars[index++]=words;
                string str;
                str=to_string(count);
                for(char digit: str){
                    chars[index++]=digit;
                }
            }
            i--;
        }
        return index;
    }
};
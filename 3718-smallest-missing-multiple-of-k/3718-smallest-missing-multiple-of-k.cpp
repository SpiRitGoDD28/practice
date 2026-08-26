class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        set<int> st;
        for(auto it: nums){
            st.insert(it);
        }
        if(st.find(k)==st.end()){
            return k;
        }
        else{
            for(int i=0; i<500; i++){
                if(st.find(k*(i+1)) == st.end()){
                    return k*(i+1);
                }
            }
            
        }

        return k;
    }
};
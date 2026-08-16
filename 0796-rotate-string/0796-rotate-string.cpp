class Solution {
public:
    bool rotateString(string s, string goal) {
        //string newS= s+s;
        /*if(s.size()!=goal.size()){
            return false;
        }
        if((s+s).find(goal)!= string::npos){
            return true;
        }
        return false;*/
        //one liner code
        return(s.size()==goal.size()) && ((s+s).find(goal)!=string::npos);
    }
};
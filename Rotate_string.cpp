class Solution {
public:
    bool rotateString(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        string st =s1 + s1;
        int i=0;
        while(i<s1.size()+1){
            if(s2==st.substr(i,s1.length())){
                return true;
            }
            i++;
        }
        return false;
    }
};

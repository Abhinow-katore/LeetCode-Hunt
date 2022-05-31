class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size()) return false;
        set<string> st;
        string temp;
        for(int i=0;i<s.size()-k+1;i++)
        {
            temp="";
            for(int j=i; j<i+k;j++)
            {
                temp+=s[j];
            }
            st.insert(temp);
        }    
        return st.size()==pow(2,k)? true: false; 
    }
};
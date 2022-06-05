class Solution {
public:
    int sum(int num1, int num2) {
        stack<int>st;
        vector<int>vec;
        vec.push_back(num1);
        vec.push_back(num2);
        st.push(vec[0]);
        st.push(vec[1]);
        int x= 0;
        for(int i = 0 ; i<vec.size(); i++){
            x = st.top() + x;
            st.pop();
        }
        st.push(x);
        return st.top();
    }
};
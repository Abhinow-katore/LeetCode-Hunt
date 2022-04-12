class Solution {
public:
    int romanToInt(string s) {
        int arr[s.length()];
        for(int i = 0 ; i<s.length(); i++){
            if(s[i] == 'M'){
                arr[i]=1000;
            }
            if(s[i] == 'D'){
                arr[i]=500;
            }
            
            if(s[i] == 'C'){
                arr[i]=100;
            }
            if(s[i] == 'L'){
                arr[i]=50;
            }
            if(s[i] == 'X'){
                arr[i]=10;
            }
            if(s[i] == 'V'){
                arr[i]=5;
            }
            if(s[i] == 'I'){
                arr[i]=1;
            }
        }
        stack<int>st;
        st.push(arr[0]);
        int add= st.top()  ;
        int sub = 0;
        for(int i = 1 ; i <s.length(); i++){
            if(st.top()>=arr[i]){
                st.push(arr[i]);
                add = arr[i] +add;
            }
            else{
                add = add - st.top();
                sub = arr[i]  -st.top();
                st.push(arr[i]);
                add = add+sub;
            }
        }
        return add;
    }
};













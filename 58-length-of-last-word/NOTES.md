// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int c = 0;
//         int pos  = 0;
//         if(s[s.length()-1]==' '){
//             for(int i = s.length()-1;i>0;i--){
//                 if(s[i]!=' ')break;
//                 pos++;
//             }
//         }
//         // c= pos;
//         for(int i = s.length()-1-pos;i>0;i--){
//             if(s[i]==' ')break;
//                c++;
//             // cout<<s[i]<<" ";
//         }
//         // cout<<s.length();
//         if(s.length() == c+1)return c+1;
//         return c;
//     }
// };
class Solution {
public:
bool isInterleave(string s1, string s2, string s3) {
int l1=0;
int l2=0;
// int fla
for(int i = 0 ; i<s3.size();i++){
if(s1[l1]==s3[i]){l1++;continue;}
if(s2[l2]==s3[i]){l2++;continue;}
if(s1[l1]!=s3[i]&&s2[l2]!=s3[i])cout<<i<<" "<<l1<<" "<<l2;
break;
}
// cout<<l1<<" "<<l2;
cout<<"\n";
// cout<<s1.size()<<" "<<s2.size();
// if(l1>=s1.size()-1 &&l2>=s2.size()-1)return true;
if(i)
return false;
}
};
​
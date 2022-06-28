class Solution {
public:
int minDeletions(string s) {
vector<int>vec;
sort(s.begin(), s.end());
int count = 1 ;
for(int i = 0 ; i<s.length()-1;i++){
if(s[i]==s[i+1]){
count++;
continue;
}
if(s[i]!=s[i+1]){
vec.push_back(count);
count=1;
}
}
vec.push_back(count);
sort(vec.rbegin(),vec.rend());
int cutted = 0;
for(int i = 0 ;i <vec.size()-1;i++){
cout<<vec[i]<<" ";
if(vec[i]<=vec[i+1]){
cutted = cutted + vec[i+1] - vec[i] + 1;
vec[i+1] = vec[i+1]-1;
}
}
cout<<"\n";
​
return cutted-1;
}
};
​
​
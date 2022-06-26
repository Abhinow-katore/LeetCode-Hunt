class Solution {
public:
int maxScore(vector<int>& cardPoints, int k) {
// cout<<cardPoints.size();
if(k==cardPoints.size()||k==cardPoints.size()-1){
// sort(cardPoints.rbegin(),cardPoints.rend());
int ans = 0;
for(int i=0; i<k;i++){
ans = ans + cardPoints[i];
}
cout<<ans;
return ans;
}
int f,l;
f= cardPoints[0];
l = cardPoints[cardPoints.size()-1];
if(f>l){
cardPoints.erase(cardPoints.begin()+cardPoints.size()-1);
}
else{
cardPoints.erase(cardPoints.begin()+0);
}
// sort(cardPoints.rbegin(),cardPoints.rend());
reverse(cardPoints.begin(), cardPoints.end());
int val = 0 ;
for(int i=0; i<k-1;i++){
val = val + cardPoints[i];
}
// cout<<val<<" "<<f<<" "<<l;
reverse(cardPoints.begin(), cardPoints.end());
int n_val = 0;
for(int i=0; i<k-1;i++){
n_val = n_val + cardPoints[i];
}
return max(f,l)+max(val,n_val);
}
};
​
​
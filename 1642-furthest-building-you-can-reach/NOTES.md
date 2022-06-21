class Solution {
public:
int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
vector<int>vec;
for(int i = 0 ; i<heights.size() ; i++){
if(heights[i]-heights[i+1] <0){
vec.push_back(heights[i+1]-heights[i]);
}
if(heights[i]-heights[i+1] >0){
vec.push_back(0);
}
}
for(int i = 0; i <vec.size(); i++){
cout<<vec[i]<<" ";
}
cout<<"\n";
// sort(vec.begin(), vec.end());
int flag = 0;
int count =0 ;
for(int i = 0 ; i<vec.size() ; i++){
if(vec[i]==0){count++;continue;}
if(bricks>0 && flag==0){
// int val = bricks;
// cout<<vec[i];
if(vec[i]>=bricks) count++;
cout<<"he0"<<count<<"\n";
bricks = vec[i] - bricks;
cout<<bricks<<"\n";
if(bricks<=0){
flag =1;
}
continue;
}
if(flag ==1 && ladders>0 ){
ladders = ladders-1;
count++;
cout<<count<<" ";
continue;
}
if(bricks<=0 && ladders<=0)break;
}
return count;
}
};
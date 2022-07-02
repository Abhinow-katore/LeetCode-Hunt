class Solution
{
public:
int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
{
sort(horizontalCuts.begin(),horizontalCuts.end());
sort(verticalCuts.begin(),verticalCuts.end());
long posH1 = horizontalCuts[0];
int posH2 = h- horizontalCuts[horizontalCuts.size()-1] ;
int posV1 = verticalCuts[0];
int posV2 = w -verticalCuts[verticalCuts.size() - 1];
​
int diffh = 0;
for (int i = 0; i < horizontalCuts.size() - 1; i++)
{
diffh = max(abs(horizontalCuts[i] - horizontalCuts[i + 1]), diffh);
}
// cout << diffh;
int diffv = 0;
for (int i = 0; i < verticalCuts.size() - 1; i++)
{
diffv = max(abs(verticalCuts[i] - verticalCuts[i + 1]), diffv);
}
// cout << diffv;
// cout<<max(posV1,max(posV2,diffv));
cout<<posV1;
cout<<posV2;
cout<<diffv;
return max(posH1,max(posH2,diffh)) * max(posV1,max(posV2,diffv))%1000000007;
}
};
​
// 2 4 =?
// 2*3
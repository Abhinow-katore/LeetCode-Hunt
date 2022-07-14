/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void CreateMapping(vector<int>inorder,map<int,int> &nodeToIndex,int n){
    for(int i=0;i<n;i++){
        nodeToIndex[inorder[i]]=i;
        }
    } 


TreeNode* solve(vector<int>preorder,vector<int>inorder,int &preOrderIndex,int start,int end,int n,map<int,int> &nodeToIndex){
    if(preOrderIndex>=n||start>end)
    {
        return NULL;
    }
    int element=preorder[preOrderIndex++];
    TreeNode* root=new TreeNode(element);
    int position=nodeToIndex[element];
    root->left=solve(preorder,inorder,preOrderIndex,start,position-1,n,nodeToIndex);
    root->right=solve(preorder,inorder,preOrderIndex,position+1,end,n,nodeToIndex);
        return root;
    }

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int preOrderIndex=0;
    int n=preorder.size();
    map<int,int> nodeToIndex;
    CreateMapping(inorder,nodeToIndex,n);
    TreeNode* ans=solve(preorder,inorder,preOrderIndex,0,n-1,n,nodeToIndex);
    return ans;
}
};
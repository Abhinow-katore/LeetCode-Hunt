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
    vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> v;
            if(root==NULL)return v;
            queue<TreeNode*> q;
            q.push(root);
            TreeNode* p;
            int c = 1;
            vector<int> h;
            while(!q.empty()){
                p = q.front();q.pop();
                c--;
                h.push_back(p->val);
                if(p->left)q.push(p->left);
                if(p->right)q.push(p->right);
                if(c==0){
                    c = q.size();
                    v.push_back(h);
                    h.resize(0);
                }
            }
            return v;
        }
};
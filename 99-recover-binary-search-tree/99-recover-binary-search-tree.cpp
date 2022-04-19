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
    TreeNode *p=NULL,*q=NULL,*r=NULL,*Prev=NULL;
    void helper(TreeNode* root)
    {
        if(!root) return;
        
        helper(root->left);
        if(Prev!=NULL)
        {
            if(Prev->val >root->val)
            {
                if(p==NULL)
                {
                    p=Prev;
                    q=root;
                }
                else
                {
                    q=root;
                }
            }
        }
     Prev=root;
        
        helper(root->right);
    }
    void recoverTree(TreeNode* root) {
       p=NULL;
        q=NULL;
        r=NULL;
        Prev=NULL;
        
        helper(root);
        
        if(r==NULL)
        {
            swap(p->val,q->val);
        }
        else
        {
            swap(p->val,r->val);
        }
        
    }
};
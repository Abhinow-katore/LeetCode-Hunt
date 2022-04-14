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
class Solution
{
public:
    bool isSymmetricfast(TreeNode *rootleft, TreeNode *rootright)
    {
        if (rootleft == NULL && rootright == NULL)
        {
            return true;
        }
        if (rootleft != NULL && rootright == NULL)
        {
            return false;
        }
        if (rootleft == NULL && rootright != NULL)
        {
            return false;
        }

        if (rootleft->val != rootright->val)
        {
            return false;
        }

        bool cnd1 = isSymmetricfast(rootleft->left, rootright->right);
        bool cnd2 = isSymmetricfast(rootleft->right, rootright->left);

        if (cnd1 == true && cnd2 == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }
        return isSymmetricfast(root->left, root->right);
    }
}
;
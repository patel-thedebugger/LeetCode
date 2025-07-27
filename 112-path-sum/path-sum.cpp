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
    /* bool check(TreeNode* root , int ts , int sum)
    {
        if(root->left == NULL )
        {
            if(root->right == NULL)
            {
                if((sum + root->val) == ts)
                    return true ;
            }
            else
                check(root->right,ts,sum+root->val);
        }
        else if(root->right == NULL)
        {
            if(root->left == NULL)
            {
                if((sum + root->val)== ts)
                    return true ;
            }
            else
                check(root->left,ts,sum+root->val);
        }
        else
        {
            check(root->left,ts,sum+root->val);
            check(root->right,ts,sum+root->val);
        }
        return false;
    } */
    bool traverse(TreeNode* root,int sum ,int ts)
    {
        
        bool ans;
        if(root != NULL)
        {
            ans = traverse(root->left,sum+root->val,ts);
            if(ans == true )
                return true;
            ans = traverse(root->right,sum+root->val,ts);
            if(ans ==  true )
                return true;
            if(root->right == NULL && root->left == NULL)
            {

                cout<<root->val<<"-"<<sum<<" ";
                if(root->val + sum == ts )
                    return true;
            }
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        //return check(root,targetSum,root->val);
        bool res = traverse(root,0,targetSum);
        if (res)
            return res;
        else
            return false;
    }
};
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

int dfs(TreeNode* root,string sum){
    if(root==NULL) return 0;
    sum+=to_string(root->val);
    if(root->left==NULL&&root->right==NULL){
        return stoi(sum);
    }
    int lsum=dfs(root->left,sum);
    int rsum=dfs(root->right,sum);
    return lsum+rsum;
}

    int sumNumbers(TreeNode* root) {
        return dfs(root,"");
    }
};
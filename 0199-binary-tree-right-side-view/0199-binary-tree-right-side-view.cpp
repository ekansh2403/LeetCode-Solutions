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
    vector<int>ans;
    void dfs(TreeNode* root,int level){
        if(root==NULL) return ;
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        dfs(root->right,level+1);
        dfs(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        //Right side view means all the nodes visible from right side
        //if we observe we see that the last nodes of traversal is our ans
        //if we iterate from right side the first nodes is our ans

        //we are doing postorder traversal but in a different way (Root,R,L)

        dfs(root,0);
        return ans;

    }
};
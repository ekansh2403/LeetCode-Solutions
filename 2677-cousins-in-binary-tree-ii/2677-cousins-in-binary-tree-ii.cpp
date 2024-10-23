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
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(root==nullptr) return root;
        queue<TreeNode*>q;
        vector<int>lsum;
        q.push(root);
        while(!q.empty()){
            int sum=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            lsum.push_back(sum);
        }

        //cousin sum=total sum of the level-sum of neighbours

        q.push(root);
        int idx=1;
        root->val=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                int padosi=(curr->left?curr->left->val:0)+(curr->right?curr->right->val:0);
                if(curr->left){ 
                    q.push(curr->left);
                    curr->left->val=lsum[idx]-padosi;

                }
                if(curr->right){
                    q.push(curr->right);
                    curr->right->val=lsum[idx]-padosi;
                }
            }
            idx++;
        }
        return root;
    }
};
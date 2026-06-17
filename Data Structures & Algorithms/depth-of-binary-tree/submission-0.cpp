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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        vector<vector<int>> v;
        queue<TreeNode*>q;
        q.push(root);
    int count=0;
        while(!q.empty())
        {
            vector<int>v1;
            int n=q.size();
            while(n>0)
            {
                TreeNode* top=q.front();
                q.pop();
                if(top->left!=NULL) q.push(top->left);
                if(top->right!=NULL) q.push(top->right);
                v1.push_back(top->val);
                n--;
            }
            count++;
            v.push_back(v1);
        }
        return count;
    }
};

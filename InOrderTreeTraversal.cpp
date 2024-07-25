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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        // helper(root, res);
        stack<TreeNode*> st;
        TreeNode* temp = root;
        while(temp || !st.empty()) {
            while(temp) {
                st.push(temp);
                temp = temp->left;
            }
            temp = st.top();
            st.pop();
            res.push_back(temp->val);
            temp = temp->right;
        }
        return res;
    }
    void helper(TreeNode* root, vector<int>& res) {
        if(root) {
            helper(root->left, res);
            res.push_back(root->val);
            helper(root->right, res);
        }
    }
};
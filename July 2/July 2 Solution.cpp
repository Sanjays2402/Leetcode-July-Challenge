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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>>vec;
        if(root==NULL)
            return vec;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            while(size--){
                TreeNode *temp=q.front();
                v.push_back(temp->val);
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
            }
            vec.push_back(v);
        }
        
        vector<vector<int>>ans;
        for(int i=vec.size()-1;i>=0;i--){
            ans.push_back(vec[i]);
        }
        return ans;
    }
};

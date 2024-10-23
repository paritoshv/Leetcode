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

       if(root==NULL){
        return NULL;
       }

       queue<TreeNode*> q;

       q.push(root);
       vector<int> lSums;
       while(!q.empty()){
            int lSum =0;
            int lSize = q.size();
            for(int i =0;i<lSize;++i){
                TreeNode* cNode = q.front();
                q.pop();

                lSum += cNode->val;
                if(cNode->left){
                    q.push(cNode->left);
                }
                if(cNode->right){
                    q.push(cNode->right);
                }
            }
            lSums.push_back(lSum);
       }

       q.push(root);
       int j =1;
       root->val =0;

       while(!q.empty()){
            int lSize = q.size();
            for(int i =0;i<lSize;++i){
                TreeNode* t = q.front();
                q.pop();

                int s = 0;
                s = s + (t->left ? t->left->val : 0);
                s = s + (t->right ? t->right->val : 0);

                if(t->left){
                    t->left->val = lSums[j]-s;
                    q.push(t->left);
                }
                if(t->right){
                    t->right->val = lSums[j]-s;
                    q.push(t->right);
                }

            }
            j++;
       }
        return root;
    }
    
};
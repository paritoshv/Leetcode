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
    TreeNode* findNode(TreeNode* root, int startValue){
        if(root == nullptr){
            return nullptr;
        }

        if(root->val == startValue){
            return root;
        }

        TreeNode* left = findNode(root->left, startValue);

        if(left != nullptr){
            return left;
        }
        return findNode(root->right,startValue);
    }

    void populateParentMap(TreeNode* root, unordered_map<int, TreeNode*>& parentMap){
        if(root== nullptr){
            return ;
        }

        if(root->left != nullptr){
            parentMap[root->left->val] = root;
            populateParentMap(root->left,parentMap);
        }

        if(root->right != nullptr){
            parentMap[root->right->val] = root;
            populateParentMap(root->right,parentMap);
        }
    }

    string backTrackPath(TreeNode * node, unordered_map<TreeNode*, pair<TreeNode*, string>> direction){
        string path;

        while(direction.count(node)){
            path += direction[node].second;
            node = direction[node].first;
        }
        reverse(path.begin(), path.end());
        return path;
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {

        TreeNode* startNode = findNode(root,startValue);
        unordered_map<int,TreeNode*> parentMap;

        populateParentMap(root,parentMap);

        queue<TreeNode*> q;
        q.push(startNode);
        unordered_set<TreeNode*> visitedNodes;

        unordered_map<TreeNode*, pair<TreeNode*, string>> direction;

        visitedNodes.insert(startNode);

        while(!q.empty()){
            TreeNode* currentNode = q.front();
            q.pop();

            if (currentNode->val == destValue) {
                // return Answer
                return backTrackPath(currentNode, direction);
            }

            //if their is a parent to current node (current node is not root node)
            if(parentMap.find(currentNode->val) != parentMap.end()){
                TreeNode* parentNode = parentMap[currentNode->val];

                if(visitedNodes.find(parentNode) == visitedNodes.end()){
                    q.push(parentNode);
                    direction[parentNode]= {currentNode, "U"};
                    visitedNodes.insert(parentNode);
                }
            }

            if(currentNode->left != nullptr && visitedNodes.find(currentNode->left) == visitedNodes.end()){
                q.push(currentNode->left);
                direction[currentNode->left] = {currentNode,"L"};
                visitedNodes.insert(currentNode->left);
            }

            if (currentNode->right != nullptr && visitedNodes.find(currentNode->right) == visitedNodes.end()) {
                q.push(currentNode->right);
                direction[currentNode->right] = {currentNode, "R"};
                visitedNodes.insert(currentNode->right);
            }

        }
        return "";
    }
};
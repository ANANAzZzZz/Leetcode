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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        }
        
        if ((!p && q) || (p && !q)) {
            return false;
        }

        queue<TreeNode*> Queue;
        
        Queue.push(p);
        Queue.push(q);
        
        while (!Queue.empty()) {
            TreeNode* Pnode = Queue.front();
            Queue.pop();
            
            TreeNode* Qnode = Queue.front();
            Queue.pop();
            
            if (Pnode->val != Qnode->val) {
                return false;
            }

            if ((Qnode->left && !Pnode->left) || (!Qnode->left && Pnode->left)) {
                return false;
            }

            if ((Qnode->right && !Pnode->right) || (!Qnode->right && Pnode->right)) {
                return false;
            }
            
            if (Qnode->left && Pnode->left) {
                Queue.push(Qnode->left);
                Queue.push(Pnode->left);
            }
            
            if (Qnode->right && Pnode->right) {
                Queue.push(Qnode->right);
                Queue.push(Pnode->right);
            }
        }
        return true;
    }
};

// Space complexity - O(n);
// Time complexity - O(n)
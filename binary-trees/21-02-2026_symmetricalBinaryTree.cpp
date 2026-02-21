code:
class Solution {
public:
    bool preorder(TreeNode* root_left, TreeNode* root_right){
        if(root_left == nullptr || root_right == nullptr){
            return root_left == root_right;
        }
        if(root_left->val != root_right->val)return false;
        bool flag_left = preorder(root_left->left, root_right->right);
        bool flag_right = preorder(root_left->right, root_right->left);
        return (flag_left & flag_right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)return true;
        return preorder(root->left, root->right);        
    }
};

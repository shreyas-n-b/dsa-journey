class Solution {
public:
    int findHeightLeft(TreeNode* root){
        int hght=0;
        while(root){
            hght++;
            root=root->left;            
        }
        return hght;
    }
    int findHeightRight(TreeNode* root){
        int hght=0;
        while(root){
            hght++;
            root=root->right;
        }
        return hght;
    }
    int countNodes(TreeNode* root) {
        int lh=findHeightLeft(root);
        int rh=findHeightRight(root);

        if(lh == rh)return pow(2,lh)-1;

        return 1+countNodes(root->left)+countNodes(root->right);        
    }
};

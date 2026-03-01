class Solution {
public:
    TreeNode* createTree(vector<int>& ino, vector<int>& pre,int iStart,int iEnd,int pStart,int pEnd,
    unordered_map<int,int>& mpp){
        if(iStart>iEnd || pStart>pEnd){
            return nullptr;
        }
        int element=pre[pStart];
        TreeNode* node=new TreeNode(element);
        auto it=mpp.find(element);
        int iStartLeft=iStart;
        int iEndLeft=(*it).second-1;
        int pStartLeft=pStart+1;
        int pEndLeft=pStart+(iEndLeft-iStartLeft+1);
        TreeNode* left_node;
        left_node=createTree(ino,pre,iStartLeft,iEndLeft,pStartLeft,pEndLeft,mpp);
        if(left_node){
            node->left=left_node;
        }
        int iStartRight=(*it).second+1;
        int iEndRight=iEnd;
        int pStartRight=pEndLeft+1;
        int pEndRight=pEnd;
        TreeNode* right_node;
        right_node=createTree(ino,pre,iStartRight,iEndRight,pStartRight,pEndRight,mpp);
        if(right_node){
            node->right=right_node;
        }
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mpp;
        for(int i=0; i<inorder.size(); i++){
            mpp[inorder[i]]=i;
        }
        return createTree(inorder,preorder,0,inorder.size()-1,0,preorder.size()-1,mpp);        
    }
};

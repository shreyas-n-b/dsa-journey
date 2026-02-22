code:
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr)return 0;
        long long max_width = 1;
        queue<pair<TreeNode*, long long>> q;
        q.push({root,0});
        while(!q.empty()){
            long long level_min=q.front().second;
            long long max_ind;
            long long min_ind;
            int count=q.size();
            for(int i=0; i<count; i++){
                TreeNode* curr=q.front().first;
                long long index=q.front().second-level_min;
                q.pop();
                if(i == 0)min_ind=index;
                if(i == count-1)max_ind=index;
                if(curr->left){
                    q.push({curr->left, 2*index+1});
                }
                if(curr->right){
                    q.push({curr->right, 2*index+2});
                }
            }
            max_width=max(max_width,max_ind-min_ind+1);
        }        
        return max_width;        
    }
};

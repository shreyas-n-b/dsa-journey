class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        int currCount=1;
        bool flag=false;
        TreeNode* currNode=NULL;
        while(!q.empty()){
            int nextCount=0;
            vector<int> v;
            while(currCount != 0){
                currNode=q.front();
                q.pop();
                currCount--;
                v.push_back(currNode->val);
                if(currNode->left){
                    q.push(currNode->left);
                    nextCount++;
                }
                if(currNode->right){
                    q.push(currNode->right);
                    nextCount++;
                }
            }
            if(flag == false){
                result.push_back(v);
            }
            else{
                reverse(v.begin(), v.end());
                result.push_back(v);
            }
            flag = (!flag);
            currCount=nextCount;
        }
        return result;        
    }
};

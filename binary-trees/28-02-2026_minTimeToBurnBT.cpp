class Solution {
  public:
    Node* findTarget(Node* root, int target){
        if(root == nullptr)return nullptr;
        if(root->data == target)return root;
        Node* first=findTarget(root->left, target);
        if(first != nullptr)return first;
        Node* second=findTarget(root->right, target);
        if(second != nullptr)return second;
        return nullptr;
    } 
    void alloteParent(Node* root, unordered_map<Node*, Node*>& parent){
        if(root == nullptr)return;
        if(root->left)parent[root->left]=root;
        if(root->right)parent[root->right]=root;
        alloteParent(root->left,parent);
        alloteParent(root->right,parent);
    }
    int minTime(Node* root, int target) {
        if(root == nullptr)return -1;
        Node* target_root=findTarget(root,target);
        if(target_root == nullptr)return -1;
        unordered_map<Node*, Node*>parent;
        parent[root]=nullptr;
        alloteParent(root,parent);
        queue<Node*> q;
        q.push(target_root);
        int dist=0;
        unordered_map<Node*, bool> visited;
        visited[target_root]=true;
        while(!q.empty()){
            int currSize=q.size();
            Node* curr;
            for(int i=0;i<currSize;i++){
                curr=q.front();
                q.pop();
                if(curr->left && !visited[curr->left]){
                    visited[curr->left]=true;
                    q.push(curr->left);
                }
                if(curr->right && !visited[curr->right]){
                    visited[curr->right]=true;
                    q.push(curr->right);
                }
                if(parent[curr] && !visited[parent[curr]]){
                    visited[parent[curr]]=true;
                    q.push(parent[curr]);
                }
            }
            dist++;
        }
        return dist-1;
    }
};

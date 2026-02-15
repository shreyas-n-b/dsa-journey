Code:
class Solution{
public:
    void traverseLeft(Node* root, queue<int>& leftNodes){
        if(root == nullptr)return;
        if(root->left == nullptr && root->right == nullptr)return;
        if(root->left){
            leftNodes.push(root->data);
            traverseLeft(root->left, leftNodes);   //important step
        }
        else{
            leftNodes.push(root->data);
            traverseLeft(root->right, leftNodes);      //important step
        }
    }
    void traverseRight(Node* root, stack<int>& rightNodes){
        if(root == nullptr)return;
        if(root->left == nullptr && root->right== nullptr)return;  //important(skip the leaf nodes)
        if(root->right){
            rightNodes.push(root->data);
            traverseRight(root->right, rightNodes);    //check right first
        }
        else{
            rightNodes.push(root->data);
            traverseRight(root->left, rightNodes);    //then check left
        }
    }
    void traverseLeaf(Node* root, vector<int>& leafNodes){
        if(root == nullptr)return;
        if(root->left == nullptr && root->right == nullptr){
            leafNodes.push_back(root->data);
        }
        traverseLeaf(root->left, leafNodes);
        traverseLeaf(root->right, leafNodes);
    }
    vector <int> boundaryTraversal(Node* root){
        vector<int> ans;
        if(root == nullptr){
            return ans;  //boundary case
        }
        ans.push_back(root->data);
        if(root->left == nullptr && root->right == nullptr)return ans;    //edge case
        queue<int> leftNodes;
        stack<int> rightNodes;
        vector<int> leafNodes;
        traverseLeft(root->left, leftNodes);
        traverseRight(root->right, rightNodes);
        traverseLeaf(root, leafNodes);
        while(!leftNodes.empty()){
            ans.push_back(leftNodes.front());
            leftNodes.pop();
        }
        for(int i=0; i<leafNodes.size(); i++){
            ans.push_back(leafNodes[i]);
        }
        while(!rightNodes.empty()){
            ans.push_back(rightNodes.top());
            rightNodes.pop();
        }
        
        return ans;
    }
};

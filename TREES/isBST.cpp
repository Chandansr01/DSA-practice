bool solve(BinaryTreeNode<int> *root, int min, int max){
    if(root==NULL){
        return true;
    }
    if(root->data >= min && root->data <= max){
        bool left = solve(root->left, min, root->data);
        bool right = solve(root->right, root->data, max);
        if(left&&right){
			return true;
        }
        else{
            return false;            
        }
    }
    return false;
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    bool ans = solve(root, INT_MIN, INT_MAX);
	return ans;
    }

vector<int> preorder(BST *tree, vector<int> array){


if(tree!=nullptr){
    array.push_back(tree->val);
    array = preorder(tree->left, array);
    array = preorder(tree->right, array); 

}


}
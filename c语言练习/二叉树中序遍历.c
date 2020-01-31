/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int treeSize(struct TreeNode* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return treeSize(root->left) + treeSize(root->right) + 1;
}
void _inorderTraversal(struct TreeNode* root,int *a,int* index)//a为数组，index为当前位置
{
    if(root == NULL)
        return;
    _inorderTraversal(root->left,a,index);
    a[*index] = root->val;
    (*index)++;
    _inorderTraversal(root->right,a,index);
    
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    *returnSize = treeSize(root);
    int* array = (int*)malloc((*returnSize)*sizeof(int));
    int index = 0;
    _inorderTraversal(root,array,&index);
    return array;

}
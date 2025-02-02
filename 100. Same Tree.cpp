/*
100. Same Tree
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
Example 1:
Tree 1:        Tree 2:
    1              1
   / \            / \
  2   3          2   3

Input: p = [1,2,3], q = [1,2,3]
Output: true
Example 2:
Tree 1:        Tree 2:
    1              1
   /                \
  2                  2


Input: p = [1,2], q = [1,null,2]
Output: false
Example 3:
Tree 1:        Tree 2:
    1              1
   / \            / \
  2   1          1   2

Input: p = [1,2,1], q = [1,1,2]
Output: false
 

Constraints:

The number of nodes in both trees is in the range [0, 100].
-104 <= Node.val <= 104
*/

//first way:

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==NULL && q==NULL){
            return true;
        }
        if(p!=NULL && q==NULL){
            return false;
        }
        if(p==NULL && q!=NULL){
            return false;
        }
    bool left= isSameTree(p->left,q->left);
    bool right= isSameTree(p->right,q->right);

    bool value= p->val == q->val;

    if(value && left && right){
        return true;
    }
    else{
        return false;
    }  
    }
};

//second way:
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        
        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

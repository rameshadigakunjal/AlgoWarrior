/*
101. Symmetric Tree
Easy
Topics
Companies
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
Example 1:

                      1
                    / | \
                  2   |   2
                 / \  |  / \
                3   4 | 4   3 
                      |

Input: root = [1,2,2,3,4,4,3]
Output: true
Example 2:

                      1
                    /   \
                  2       2
                   \       \
                    3       3 


Input: root = [1,2,2,null,3,null,3]
Output: false

Constraints:
The number of nodes in the tree is in the range [1, 1000].
-100 <= Node.val <= 100
 
*/
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isSymmetricHelp(root->left, root->right);        
    }
    bool isSymmetricHelp(TreeNode* left,TreeNode* right){
        if(left==NULL || right==NULL){
            return left==right;     //true 
        }
        if(left->val != right->val){ return false;}
        
        return isSymmetricHelp(left->left, right->right)&&  //both condition are simultaniously
               isSymmetricHelp(left->right, right->left);

    }

};

/*
623. Add One Row to Tree

Given the root of a binary tree and two integers val and depth, add a row of nodes with value val at the given depth depth.

Note that the root node is at depth 1.

The adding rule is:

Given the integer depth, for each not null tree node cur at the depth depth - 1, create two tree nodes with value val as cur's left subtree root and right subtree root.
cur's original left subtree should be the left subtree of the new left subtree root.
cur's original right subtree should be the right subtree of the new right subtree root.
If depth == 1 that means there is no depth depth - 1 at all, then create a tree node with value val as the new root of the whole original tree, and the original tree is the new root's left subtree.
 
Example 1:
Input: root = [4,2,6,3,1,5], val = 1, depth = 2
Output: [4,1,1,2,null,null,6,3,1,5]

Example 2:
Input: root = [4,2,null,3,1], val = 1, depth = 3
Output: [4,2,null,1,1,3,null,null,1]
 
 Constraints:
The number of nodes in the tree is in the range [1, 104].
The depth of the tree is in the range [1, 104].
-100 <= Node.val <= 100
-105 <= val <= 105
1 <= depth <= the depth of tree + 1
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // void helper(TreeNode *root,int v,int d,int level)
    // {
    //          if(level==d-1)
    //          {
    //                 TreeNode *NewNode1=new TreeNode(v);
    //                 TreeNode *NewNode2=new TreeNode(v);
    //                 NewNode1->left=root->left;
    //                 NewNode2->right=root->right;
    //                root->left=NewNode1;
    //                 root->right=NewNode2;
    //                return ;
    //         }
    //       if(root->left!=NULL)
    //       {
    //           helper(root->left,v,d,level+1);     
    //       }
    //     if(root->right!=NULL)
    //       {
    //           helper(root->right,v,d,level+1);     
    //       }
    // }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        
                    
                    if(d==1)
                    {
                        TreeNode *NewNode=new TreeNode(v);
                        NewNode->left=root;
                        return NewNode;
                    }
                //helper(root,v,d,1);
               queue<TreeNode*> q;
                q.push(root);
               int level=1;
               while(level<d-1)
               {
                 
                       queue<TreeNode*> temp;
                              while(!q.empty())
                              {
                              TreeNode *t=q.front();
                               q.pop();
                              if(t->left!=NULL)
                              {
                                  temp.push(t->left);
                              }
                           if(t->right!=NULL)
                           {
                               temp.push(t->right);
                           }
                              }
                       
                      
                      level++;
                      q=temp;
                      
               }
             while(!q.empty())
             {
                   TreeNode *t=q.front();
                               q.pop();
                   TreeNode* temp=t->left;
                  t->left=new TreeNode(v);
                 t->left->left=temp;
                 temp=t->right;
                 t->right=new TreeNode(v);
                 t->right->right=temp;
                 
             }
             return root;
                    
                
        
    }
};
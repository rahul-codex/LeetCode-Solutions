/*
====================================================================
Problem: Binary Tree Preorder Traversal
Platform: LeetCode
Problem No.: 144
Difficulty: Easy

Problem Statement:

Given the root of a binary tree, return the preorder
traversal of its nodes' values.

Preorder Traversal follows this order:

    Root -> Left -> Right

Input:
- The root node of a binary tree.

Output:
- Return a vector containing the node values in preorder order.

Example 1:

Input:
root = [1, null, 2, 3]

Output:
[1, 2, 3]

Explanation:

    1
     \
      2
     /
    3

Preorder: 1 -> 2 -> 3

Example 2:

Input:
root = [1, 2, 3, 4, 5, null, 8, null, null, 6, 7, 9]

Output:
[1, 2, 4, 5, 6, 7, 3, 8, 9]

Example 3:

Input:
root = []

Output:
[]

Example 4:

Input:
root = [1]

Output:
[1]

====================================================================
Approach:

Recursive Approach (Depth First Search)

We use recursion to perform preorder traversal of the
binary tree.

Preorder follows three steps:

1. Root: First visit the current node and store its value.
2. Left: Recursively traverse the left subtree.
3. Right: Recursively traverse the right subtree.

We use a separate recursive function named preorder()
to perform the traversal.

The vector ans stores all visited node values.

Base Case:

If root == nullptr, return without doing anything.

This prevents recursion from continuing beyond a leaf node.

====================================================================
Algorithm:

1. Create an empty vector ans.
2. Call preorder(root, ans).
3. Inside the preorder function:

   a. Check whether root is nullptr.
   b. If yes, return.
   c. Store root->val in ans using push_back().
   d. Recursively call preorder(root->left, ans).
   e. Recursively call preorder(root->right, ans).

4. Return ans.

====================================================================
Complexity:

Time Complexity:
O(n)

Every node is visited exactly once.

Space Complexity:
O(h) auxiliary recursion stack space.

Where:
- n = Number of nodes.
- h = Height of the binary tree.

Worst Case:
O(n) for a completely skewed tree.

Balanced Tree:
O(log n) recursion stack space.

Output Space:
O(n) for storing the traversal result.

====================================================================
Code
====================================================================
*/

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> ans;

        preorder(root, ans);

        return ans;
    }

    void preorder(TreeNode* root, vector<int>& ans) {

        if (root == nullptr)
            return;

        ans.push_back(root->val);

        preorder(root->left, ans);

        preorder(root->right, ans);
    }
};

/*
====================================================================
Problem: Binary Tree Postorder Traversal
Platform: LeetCode
Problem No.: 145
Difficulty: Easy

Problem Statement:

Given the root of a binary tree, return the postorder
traversal of its nodes' values.

Postorder Traversal follows this order:

    Left -> Right -> Root

Input:
- The root node of a binary tree.

Output:
- Return a vector containing the node values in postorder order.

Example 1:

Input:
root = [1, null, 2, 3]

Output:
[3, 2, 1]

Explanation:

    1
     \
      2
     /
    3

Postorder: 3 -> 2 -> 1

Example 2:

Input:
root = [1, 2, 3, 4, 5, null, 8, null, null, 6, 7, 9]

Output:
[4, 6, 7, 5, 2, 9, 8, 3, 1]

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

We use recursion to perform postorder traversal of
the binary tree.

Postorder follows three steps:

1. Left: Recursively traverse the left subtree.
2. Right: Recursively traverse the right subtree.
3. Root: Visit the current node and store its value.

We use a separate recursive function named apostorder()
to perform the traversal.

The vector ans stores all visited node values.

Base Case:

If root == nullptr, return without doing anything.

This prevents recursion from continuing beyond a leaf node.

====================================================================
Algorithm:

1. Create an empty vector ans.
2. Call apostorder(root, ans).
3. Inside the apostorder function:

   a. Check whether root is nullptr.
   b. If yes, return.
   c. Recursively call apostorder(root->left, ans).
   d. Recursively call apostorder(root->right, ans).
   e. Store root->val in ans using push_back().

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
    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> ans;

        apostorder(root, ans);

        return ans;
    }

    void apostorder(TreeNode* root, vector<int>& ans) {

        if (root == nullptr)
            return;

        apostorder(root->left, ans);

        apostorder(root->right, ans);

        ans.push_back(root->val);
    }
};

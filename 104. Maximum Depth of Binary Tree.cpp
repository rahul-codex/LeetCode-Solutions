/*
====================================================================
Problem: Maximum Depth of Binary Tree
Platform: LeetCode
Problem No.: 104
Difficulty: Easy

Problem Statement:

Given the root of a binary tree, return its maximum depth.

The maximum depth of a binary tree is the number of nodes
along the longest path from the root node down to the
farthest leaf node.

Input:
- The root node of a binary tree.

Output:
- Return the maximum depth of the binary tree.

Example 1:

Input:
root = [3, 9, 20, null, null, 15, 7]

Output:
3

Explanation:

The longest path is:

       3
        \
         20
        /  \
       15   7

The maximum depth is 3.

Example 2:

Input:
root = [1, null, 2]

Output:
2

Explanation:

The longest path contains two nodes:

    1
     \
      2

Maximum depth = 2.

====================================================================
Approach:

Recursive Approach (Depth First Search)

We use recursion to calculate the maximum depth of
the left and right subtrees.

Base Case:

If root == NULL, return 0 because an empty tree
has no nodes.

Recursive Steps:

1. Calculate the maximum depth of the left subtree.
2. Calculate the maximum depth of the right subtree.
3. Find the maximum between left and right depths.
4. Add 1 for the current root node.

Formula:

    maxDepth(root) =
    1 + max(maxDepth(root->left),
            maxDepth(root->right))

Finally, return the calculated maximum depth.

====================================================================
Algorithm:

1. Check whether root is NULL.
2. If yes, return 0.
3. Recursively calculate the left subtree depth:
       left = maxDepth(root->left)
4. Recursively calculate the right subtree depth:
       right = maxDepth(root->right)
5. Find the maximum between left and right.
6. Add 1 for the current node.
7. Return the result.

====================================================================
Complexity:

Time Complexity:
O(n)

Every node of the binary tree is visited exactly once.

Space Complexity:
O(h)

The recursion call stack requires space proportional
to the height of the tree.

Where:
- n = Number of nodes.
- h = Height of the binary tree.

Worst Case:
O(n) for a completely skewed tree.

Balanced Tree:
O(log n) recursion stack space.

====================================================================
Code
====================================================================
*/

class Solution {
public:
    int maxDepth(TreeNode* root) {

        if (root == NULL)
            return 0;

        int left = maxDepth(root->left);

        int right = maxDepth(root->right);

        return max(left, right) + 1;
    }
};

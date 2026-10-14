/*
====================================================================
Problem: Middle of the Linked List
Platform: LeetCode
Problem No.: 876
Difficulty: Easy

Problem Statement:
Given the head of a singly linked list, return the middle node
of the linked list.

If there are two middle nodes, return the second middle node.

Input:
- The head of a singly linked list.

Output:
- Return the middle node of the linked list.

Example 1:
Input:
head = [1, 2, 3, 4, 5]

Output:
[3, 4, 5]

Explanation:
The middle node is 3.

Example 2:
Input:
head = [1, 2, 3, 4, 5, 6]

Output:
[4, 5, 6]

Explanation:
There are two middle nodes, 3 and 4.
We return the second middle node, which is 4.

====================================================================
Approach:

Use the Slow and Fast Pointer technique.

Initialize two pointers:
- slow points to the head.
- fast points to the head.

Move slow one node at a time and fast two nodes at a time.

When fast reaches the end of the list, slow will point to the
middle node.

For an even number of nodes, slow points to the second middle
node, as required.

====================================================================
Algorithm:

1. Initialize slow = head.
2. Initialize fast = head.
3. While fast is not NULL and fast->next is not NULL:
   - Move slow one step:
         slow = slow->next
   - Move fast two steps:
         fast = fast->next->next
4. Return slow.

====================================================================
Complexity:

Time Complexity:
O(n)

Space Complexity:
O(1)

====================================================================
Code
====================================================================
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    ListNode* middleNode(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

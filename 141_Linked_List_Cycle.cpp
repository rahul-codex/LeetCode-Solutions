/*
====================================================================
Problem: Linked List Cycle
Platform: LeetCode
Problem No.: 141
Difficulty: Easy

Problem Statement:
Given the head of a linked list, determine whether the linked list
contains a cycle.

A cycle exists if a node can be reached again by continuously
following the next pointer.

Return true if a cycle exists; otherwise, return false.

Input:
- The head of a singly linked list.
- The position pos indicates where the tail connects to another
  node. This value is used internally and is not passed as input.

Output:
- Return true if the linked list contains a cycle.
- Otherwise, return false.

Example 1:
Input:
head = [3, 2, 0, -4]
pos = 1

Output:
true

Explanation:
The tail connects to the node at index 1, creating a cycle.

Example 2:
Input:
head = [1, 2]
pos = 0

Output:
true

Explanation:
The tail connects to the first node, creating a cycle.

Example 3:
Input:
head = [1]
pos = -1

Output:
false

Explanation:
The linked list does not contain a cycle.

====================================================================
Approach:

Use Floyd's Cycle Detection Algorithm, also known as the
Slow and Fast Pointer technique.

Initialize two pointers:
- slow moves one node at a time.
- fast moves two nodes at a time.

If a cycle exists, the fast pointer will eventually meet the
slow pointer.

If fast or fast->next becomes NULL, the linked list has no cycle.

This approach detects cycles using constant extra memory.

====================================================================
Algorithm:

1. Initialize slow = head.
2. Initialize fast = head.
3. While fast is not NULL and fast->next is not NULL:
   - Move slow one step:
         slow = slow->next
   - Move fast two steps:
         fast = fast->next->next
   - If slow == fast, return true.
4. If the loop ends, return false.

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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution
{
public:
    bool hasCycle(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            }
        }

        return false;
    }
};

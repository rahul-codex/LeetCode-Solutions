/*
====================================================================
Problem: Reverse Linked List
Platform: LeetCode
Problem No.: 206
Difficulty: Easy

Problem Statement:
Given the head of a singly linked list, reverse the list and
return the head of the reversed linked list.

Input:
- The head of a singly linked list.

Output:
- Return the head of the reversed linked list.

Example 1:
Input:
head = [1, 2, 3, 4, 5]

Output:
[5, 4, 3, 2, 1]

Example 2:
Input:
head = [1, 2]

Output:
[2, 1]

Example 3:
Input:
head = []

Output:
[]

====================================================================
Approach:

Use an iterative approach with three pointers:
- prev: Stores the previous node.
- curn: Points to the current node.
- next: Temporarily stores the next node.

Initially, prev and next are NULL, while curn points to head.

For each node:
1. Store the next node in next.
2. Reverse the current node's link to point to prev.
3. Move prev to the current node.
4. Move curn to the next node.

When curn becomes NULL, prev points to the new head.

====================================================================
Algorithm:

1. Initialize prev = NULL.
2. Initialize curn = head.
3. Initialize next = NULL.
4. While curn is not NULL:
   - Store curn->next in next.
   - Set curn->next = prev.
   - Move prev to curn.
   - Move curn to next.
5. Return prev as the new head.

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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curn = head;
        ListNode* next = NULL;

        while (curn != NULL)
        {
            next = curn->next;
            curn->next = prev;
            prev = curn;
            curn = next;
        }

        return prev;
    }
};

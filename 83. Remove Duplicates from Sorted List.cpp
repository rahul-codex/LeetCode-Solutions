/*
====================================================================
Problem: Remove Duplicates from Sorted List
Platform: LeetCode
Problem No.: 83
Difficulty: Easy

Problem Statement:

Given the head of a sorted linked list, delete all duplicate
elements such that each element appears only once.

Return the linked list in sorted order.

Input:
- The head of a sorted singly linked list.

Output:
- Return the linked list after removing all duplicate nodes.

Example 1:

Input:
head = [1, 1, 2]

Output:
[1, 2]

Explanation:
The value 1 appears twice.
Remove the duplicate node and keep only one occurrence.

Example 2:

Input:
head = [1, 1, 2, 3, 3]

Output:
[1, 2, 3]

Explanation:
The value 1 appears twice and the value 3 appears twice.
Remove the duplicate nodes and keep only one occurrence
of each element.

====================================================================
Approach:

Two Pointer Approach (Using Current Node)

Since the linked list is already sorted, duplicate elements
will always be next to each other.

We use a pointer named temp to traverse the linked list.

Compare the current node's value with the next node's value.

1. If both values are equal:
   - Skip the next node.
   - Update temp->next = temp->next->next.

2. If both values are different:
   - Move temp to the next node.

Continue until the end of the linked list.

Finally, return the original head.

====================================================================
Algorithm:

1. Check if the linked list is empty or contains only one node.
2. If yes, return head.
3. Initialize temp = head.
4. Traverse the linked list while temp and temp->next exist.
5. Compare temp->val with temp->next->val.
6. If both values are equal:
   - Remove the duplicate node by updating:
     temp->next = temp->next->next.
7. Otherwise:
   - Move temp to the next node.
8. Return head.

====================================================================
Complexity:

Time Complexity:
O(n)

Each node is visited at most once.

Space Complexity:
O(1)

Only one extra pointer is used.

====================================================================
Code
====================================================================
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {

            if (temp->val == temp->next->val) {

                temp->next = temp->next->next;

            }
            else {

                temp = temp->next;

            }
        }

        return head;
    }
};

/*
====================================================================
Problem: Find Smallest Letter Greater Than Target
Platform: LeetCode
Problem No.: 744
Difficulty: Easy

Problem Statement:

Given a sorted array of characters letters and a character target,
find the smallest character that is lexicographically greater
than target.

If no character is greater than target, return the first
character of the array.

Input:
- A sorted character array letters.
- A character target.

Output:
- Return the smallest character greater than target.
- If no such character exists, return letters[0].

Example 1:

Input:
letters = ['c', 'f', 'j']
target = 'a'

Output:
'c'

Explanation:
The smallest character greater than 'a' is 'c'.

Example 2:

Input:
letters = ['c', 'f', 'j']
target = 'c'

Output:
'f'

Explanation:
The smallest character greater than 'c' is 'f'.

Example 3:

Input:
letters = ['x', 'x', 'y', 'y']
target = 'z'

Output:
'x'

Explanation:
No character is greater than 'z'.
Therefore, return the first character 'x'.

====================================================================
Approach:

Linear Search Approach

Since the letters array is already sorted in non-decreasing
order, we can traverse it from left to right.

We compare every character with the target.

Steps:

1. Traverse the letters array from index 0.
2. Compare the current character with target.
3. If letters[i] > target:
   - Return letters[i] immediately.
4. If no character is greater than target:
   - Return letters[0].

Why does this work?

Because the array is sorted, the first character greater
than target is automatically the smallest character
that satisfies the condition.

====================================================================
Algorithm:

1. Initialize the loop variable i = 0.
2. Traverse the letters array.
3. Check whether letters[i] > target.
4. If true, return letters[i].
5. If the loop finishes without finding a greater character,
   return letters[0].

====================================================================
Complexity:

Time Complexity:
O(n)

In the worst case, we traverse the entire array.

Space Complexity:
O(1)

Only constant extra variables are used.

====================================================================
Code
====================================================================
*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n, m = target;

        for (int i = 0; i < letters.size(); i++) {

            n = letters[i];

            if (n > m) {

                return letters[i];

            }
        }

        return letters[0];
    }
};

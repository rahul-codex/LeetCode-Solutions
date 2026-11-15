/*
====================================================================
Problem: Two Sum II - Input Array Is Sorted
Platform: LeetCode
Problem No.: 167
Difficulty: Medium

Problem Statement:

Given a 1-indexed array of integers numbers that is already sorted
in non-decreasing order, find two numbers that add up to a
specific target.

Return the indices of these two numbers as an integer array
[index1, index2].

Conditions:
- 1 <= index1 < index2 <= numbers.length.
- You cannot use the same element twice.
- Exactly one solution exists.
- Use only constant extra space.

Input:
- A sorted integer array numbers.
- An integer target.

Output:
- Return the 1-based indices of the two elements whose sum
  equals the target.

Example 1:

Input:
numbers = [2, 7, 11, 15]
target = 9

Output:
[1, 2]

Explanation:
2 + 7 = 9

Therefore, the indices are 1 and 2.

Example 2:

Input:
numbers = [2, 3, 4]
target = 6

Output:
[1, 3]

Explanation:
2 + 4 = 6

Example 3:

Input:
numbers = [-1, 0]
target = -1

Output:
[1, 2]

Explanation:
-1 + 0 = -1

====================================================================
Approach:

Two Pointer Approach

Since the array is already sorted, we can efficiently
find the required pair using two pointers.

We initialize two pointers:

1. l = 0 (Left pointer)
2. r = numbers.size() - 1 (Right pointer)

Calculate the sum:

    sum = numbers[l] + numbers[r]

There are three possible cases:

Case 1: If sum == target
- We found the required pair.
- Return {l + 1, r + 1} because the question requires
  1-based indexing.

Case 2: If sum < target
- The current sum is too small.
- Increase the left pointer (l++) to get a larger value.

Case 3: If sum > target
- The current sum is too large.
- Decrease the right pointer (r--) to get a smaller value.

Continue until both pointers meet.

====================================================================
Algorithm:

1. Initialize l = 0.
2. Initialize r = numbers.size() - 1.
3. Run a while loop while l < r.
4. Calculate the sum of numbers[l] and numbers[r].
5. If sum equals target:
   - Return {l + 1, r + 1}.
6. If sum is smaller than target:
   - Increment l.
7. Otherwise:
   - Decrement r.
8. Return an empty vector if no pair is found.

====================================================================
Complexity:

Time Complexity:
O(n)

Each pointer moves through the array at most once.

Space Complexity:
O(1)

Only two pointers are used.
No extra data structure is required.

====================================================================
Code
====================================================================
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {

        int l = 0, r = num.size() - 1;

        while (l < r) {

            if (num[l] + num[r] == target) {

                return {l + 1, r + 1};

            }
            else if (num[l] + num[r] < target) {

                l++;

            }
            else {

                r--;

            }
        }

        return {};
    }
};

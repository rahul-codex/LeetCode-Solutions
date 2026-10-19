/*
====================================================================
Problem: Find Target Indices After Sorting Array
Platform: LeetCode
Problem No.: 2089
Difficulty: Easy

Problem Statement:
Given a 0-indexed integer array nums and an integer target, return
the indices where nums[i] == target after sorting nums in
non-decreasing order.

The returned indices must be sorted in increasing order.

If no target indices exist, return an empty vector.

Input:
- An integer array nums.
- An integer target.

Output:
- Return the indices of target after sorting nums.

Example 1:
Input:
nums = [1, 2, 5, 2, 3]
target = 2

Output:
[1, 2]

Explanation:
After sorting, nums = [1, 2, 2, 3, 5].
The target 2 appears at indices 1 and 2.

Example 2:
Input:
nums = [1, 2, 5, 2, 3]
target = 3

Output:
[3]

Explanation:
After sorting, nums = [1, 2, 2, 3, 5].
The target 3 appears at index 3.

Example 3:
Input:
nums = [1, 2, 5, 2, 3]
target = 5

Output:
[4]

Explanation:
After sorting, nums = [1, 2, 2, 3, 5].
The target 5 appears at index 4.

====================================================================
Approach:

First, sort the array in non-decreasing order using sort().

Then, traverse the sorted array from left to right.

Whenever nums[i] equals target, add index i to the answer vector.

Since the array is sorted and traversed from left to right, the
resulting indices are automatically in increasing order.

Finally, return the answer vector.

====================================================================
Algorithm:

1. Create an empty vector ans to store the target indices.

2. Sort nums using:
      sort(nums.begin(), nums.end());

3. Traverse the array from index 0 to nums.size() - 1.

4. For each index i:
   - If nums[i] == target, add i to ans.

5. Return ans.

====================================================================
Complexity:

Time Complexity:
O(n log n)

Space Complexity:
O(n) auxiliary space for the answer vector.
Sorting space depends on the implementation.

====================================================================
Code
====================================================================
*/

class Solution
{
public:
    vector<int> targetIndices(vector<int>& nums, int target)
    {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

/*
====================================================================
Problem: Find First and Last Position of Element in Sorted Array
Platform: LeetCode
Problem No.: 34
Difficulty: Medium

Problem Statement:
Given a sorted array of integers nums in non-decreasing order, find
the starting and ending positions of a given target value.

If the target is not present in the array, return [-1, -1].

The solution must have O(log n) time complexity.

Input:
- A sorted integer array nums.
- An integer target.

Output:
- Return the first and last positions of the target.
- If the target does not exist, return [-1, -1].

Example 1:
Input:
nums = [5,7,7,8,8,10]
target = 8

Output:
[3,4]

Example 2:
Input:
nums = [5,7,7,8,8,10]
target = 6

Output:
[-1,-1]

Example 3:
Input:
nums = []
target = 0

Output:
[-1,-1]

====================================================================
Approach:

Use Binary Search twice.

1. First Binary Search:
   Find the first occurrence of the target.

2. Second Binary Search:
   Find the last occurrence of the target.

This satisfies the required O(log n) time complexity.

====================================================================
Algorithm:

1. Perform Binary Search to find the first occurrence.
2. Store the index if found.
3. Perform Binary Search again to find the last occurrence.
4. Store the index if found.
5. Return both indices.

====================================================================
Complexity:

Time Complexity:
O(log n)

Space Complexity:
O(1)

====================================================================
*/

class Solution
{
public:
    int firstOccurrence(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }

    int lastOccurrence(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        return {firstOccurrence(nums, target),
                lastOccurrence(nums, target)};
    }
};

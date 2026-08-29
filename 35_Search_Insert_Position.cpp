/*
====================================================================
Problem: Search Insert Position
Platform: LeetCode
Problem No.: 35
Difficulty: Easy

Problem Statement:
Given a sorted array of distinct integers and a target value, return
the index if the target is found.

If the target is not found, return the index where it would be
inserted to keep the array sorted.

The solution must have O(log n) runtime complexity.

Input:
- A sorted array nums containing distinct integers.
- An integer target.

Output:
- Return the index of target if it exists.
- Otherwise, return the index where target should be inserted.

Example 1:
Input:
nums = [1, 3, 5, 6], target = 5

Output:
2

Example 2:
Input:
nums = [1, 3, 5, 6], target = 2

Output:
1

Example 3:
Input:
nums = [1, 3, 5, 6], target = 7

Output:
4

====================================================================
Approach 1: Binary Search

Since the array is sorted, we can use Binary Search.

Maintain two pointers:
- l = left boundary
- r = right boundary

Find the middle element and compare it with target.

- If nums[mid] == target, return mid.
- If nums[mid] > target, search the left half.
- If nums[mid] < target, search the right half.

When the loop ends, l represents the correct insertion position.

====================================================================
Algorithm 1:

1. Set l = 0 and r = nums.size() - 1.
2. While l <= r:
   - Calculate mid.
   - If nums[mid] == target, return mid.
   - If nums[mid] > target, move r to mid - 1.
   - Otherwise, move l to mid + 1.
3. Return l as the insertion position.

====================================================================
Complexity:

Time Complexity:
O(log n)

Space Complexity:
O(1)

====================================================================
Approach 2: Linear Search

Traverse the array from left to right.

For every element:
- If nums[i] >= target, return i.

If no such element is found, target should be inserted at the end,
so return nums.size().

This approach is simpler but does not satisfy the required
O(log n) runtime complexity.

====================================================================
Algorithm 2:

1. Traverse the array from index 0.
2. If nums[i] >= target, return i.
3. If the target is greater than every element, return nums.size().

====================================================================
Complexity:

Time Complexity:
O(n)

Space Complexity:
O(1)

====================================================================
Code 1: Binary Search - Recommended
====================================================================
*/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return l;
    }
};


/*
====================================================================
Code 2: Linear Search - Reference Approach
====================================================================
*/

// class Solution
// {
// public:
//     int searchInsert(vector<int> &nums, int target)
//     {
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] >= target)
//             {
//                 return i;
//             }
//         }
//
//         return nums.size();
//     }
// };

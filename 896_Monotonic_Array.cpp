/*
====================================================================
Problem: Monotonic Array
Platform: LeetCode
Problem No.: 896
Difficulty: Easy

Problem Statement:
An array is called monotonic if it is either entirely increasing
or entirely decreasing.

An array is monotone increasing if:
nums[i] <= nums[j] for all i <= j.

An array is monotone decreasing if:
nums[i] >= nums[j] for all i <= j.

Return true if the given array is monotonic; otherwise, return false.

Input:
- An integer array nums.

Output:
- Return true if nums is monotonic.
- Return false otherwise.

Example 1:
Input:
nums = [1, 2, 2, 3]

Output:
true

Explanation:
The array is monotone increasing.

Example 2:
Input:
nums = [6, 5, 4, 4]

Output:
true

Explanation:
The array is monotone decreasing.

Example 3:
Input:
nums = [1, 3, 2]

Output:
false

Explanation:
The array is neither completely increasing nor completely decreasing.

====================================================================
Approach:

Maintain two boolean variables:

- increasing: assumes the array is increasing.
- decreasing: assumes the array is decreasing.

Traverse the array and compare every pair of adjacent elements.

- If nums[i] > nums[i + 1], the array cannot be increasing.
- If nums[i] < nums[i + 1], the array cannot be decreasing.

At the end, if either increasing or decreasing is still true,
the array is monotonic.

Equal adjacent elements are allowed in both cases.

====================================================================
Algorithm:

1. Initialize:
      increasing = true
      decreasing = true

2. Traverse the array from index 0 to n - 2.

3. If nums[i] > nums[i + 1]:
      Set increasing = false.

4. If nums[i] < nums[i + 1]:
      Set decreasing = false.

5. Return:
      increasing || decreasing

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

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        bool increasing = true;
        bool decreasing = true;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                increasing = false;
            }

            if (nums[i] < nums[i + 1])
            {
                decreasing = false;
            }
        }

        return increasing || decreasing;
    }
};

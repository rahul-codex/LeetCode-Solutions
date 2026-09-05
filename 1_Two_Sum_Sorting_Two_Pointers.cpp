/*
====================================================================
Problem: Two Sum
Platform: LeetCode
Problem No.: 1
Difficulty: Easy

Problem Statement:
Given an array of integers nums and an integer target, return the
indices of the two numbers whose sum is equal to target.

You may not use the same element twice.

It is guaranteed that exactly one valid solution exists.

Input:
- An integer array nums.
- An integer target.

Output:
- Return the indices of the two elements whose sum equals target.

Example 1:
Input:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]

Explanation:
nums[0] + nums[1] = 2 + 7 = 9.

Example 2:
Input:
nums = [3, 2, 4]
target = 6

Output:
[1, 2]

Example 3:
Input:
nums = [3, 3]
target = 6

Output:
[0, 1]

====================================================================
Approach:

Create a vector of pairs to store each number along with its
original index.

Sort the pairs based on the values.

Use two pointers:
- left starts from the beginning.
- right starts from the end.

Calculate the sum of the values at both pointers.

If the sum equals target, return their original indices.

If the sum is smaller than target, move left forward.

If the sum is greater than target, move right backward.

The original indices are preserved because each value is stored
together with its original index.

====================================================================
Algorithm:

1. Create a vector of pairs:
      value -> original index

2. Traverse the nums array and store each value with its index.

3. Sort the vector based on the values.

4. Initialize:
      left = 0
      right = n - 1

5. While left < right:
   - Calculate sum = arr[left].first + arr[right].first.
   - If sum == target, return their original indices.
   - If sum < target, increment left.
   - Otherwise, decrement right.

6. If no pair is found, return an empty vector.

====================================================================
Complexity:

Time Complexity:
O(n log n)

Space Complexity:
O(n)

====================================================================
Code
====================================================================
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<pair<int, int>> arr;

        // Store value + original index
        for (int i = 0; i < nums.size(); i++)
        {
            arr.push_back({nums[i], i});
        }

        // Sort based on value
        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        while (left < right)
        {
            int sum = arr[left].first + arr[right].first;

            if (sum == target)
            {
                return {arr[left].second, arr[right].second};
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return {};
    }
};

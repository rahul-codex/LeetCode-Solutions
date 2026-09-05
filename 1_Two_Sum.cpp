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

Use an unordered_map to store each number and its index.

For every element nums[i], calculate its complement:

    complement = target - nums[i]

If the complement already exists in the map, we have found the
required pair.

Otherwise, store the current number and its index in the map.

This avoids checking every possible pair and gives an average
O(n) solution.

====================================================================
Algorithm:

1. Create an unordered_map to store:
      number -> index

2. Traverse the array from left to right.

3. For each element:
   - Calculate complement = target - nums[i].
   - Check if complement exists in the map.
   - If it exists, return its stored index and i.
   - Otherwise, store nums[i] with its index.

4. If no pair is found, return an empty vector.

====================================================================
Complexity:

Time Complexity:
O(n) average

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
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end())
            {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

/*
====================================================================
Problem: Missing Number
Platform: LeetCode
Problem No.: 268
Difficulty: Easy

Problem Statement:
Given an array nums containing n distinct numbers in the range [0, n],
return the only number in the range that is missing from the array.

Input:
- An integer array nums of size n.
- The array contains distinct numbers in the range [0, n].

Output:
- Return the missing number.

Example 1:
Input:
nums = [3,0,1]

Output:
2

Explanation:
The numbers are in the range [0,3]. The missing number is 2.

Example 2:
Input:
nums = [0,1]

Output:
2

Explanation:
The numbers are in the range [0,2]. The missing number is 2.

Example 3:
Input:
nums = [9,6,4,2,3,5,7,0,1]

Output:
8

Explanation:
The numbers are in the range [0,9]. The missing number is 8.

====================================================================
Approach 1: Mathematical Formula

Algorithm:
1. Calculate the expected sum from 0 to n.
2. Calculate the actual sum of the array.
3. Return expectedSum - actualSum.

Time Complexity: O(n)
Space Complexity: O(1)
====================================================================
*/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();

        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums)
        {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};

/*
====================================================================
Approach 2: XOR

Algorithm:
1. Initialize ans = n.
2. XOR ans with every index.
3. XOR ans with every array element.
4. The remaining value is the missing number.

Time Complexity: O(n)
Space Complexity: O(1)
====================================================================
*/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++)
        {
            ans ^= i;
            ans ^= nums[i];
        }

        return ans;
    }
};

/*
====================================================================
Approach 3: Sorting

Algorithm:
1. Sort the array.
2. Traverse the array.
3. If nums[i] != i, return i.
4. If all positions are correct, return n.

Time Complexity: O(n log n)
Space Complexity: O(1) (Ignoring sorting implementation space)
====================================================================
*/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
                return i;
        }

        return nums.size();
    }
};

/*
====================================================================
Problem: Minimum Moves to Equal Array Elements III
Platform: LeetCode
Problem No.: 3736
Difficulty: Easy

Problem Statement:
Given an integer array nums, in one move, you can increase the
value of any single element nums[i] by 1.

Return the minimum total number of moves required to make all
elements of the array equal.

Input:
- An integer array nums.

Output:
- Return the minimum number of moves required to make all
  elements equal.

Example 1:
Input:
nums = [2, 1, 3]

Output:
3

Explanation:
The maximum element is 3.

Increase 2 to 3: 1 move.
Increase 1 to 3: 2 moves.

Total moves = 1 + 2 = 3.

Example 2:
Input:
nums = [4, 4, 5]

Output:
2

Explanation:
The maximum element is 5.

Increase the first 4 to 5: 1 move.
Increase the second 4 to 5: 1 move.

Total moves = 2.

====================================================================
Approach:

Find the maximum element in the array because we can only
increase elements, not decrease them.

Every element must become equal to the maximum element.

For each element, calculate:

    moves = maximum - nums[i]

Add all these moves to get the minimum total moves.

An optimized mathematical approach uses:

    Total Moves = (n * maximum) - sum

Where:
- n = number of elements.
- maximum = largest element.
- sum = sum of all elements.

Both approaches produce the same result.

====================================================================
Algorithm:

Approach 1: Maximum Element + Loop

1. Initialize mx = nums[0].
2. Traverse the array to find the maximum element.
3. Initialize ans = 0.
4. Traverse the array again.
5. Add (mx - nums[i]) to ans.
6. Return ans.

Approach 2: Maximum Element + Sum

1. Initialize mx = nums[0] and sum = 0.
2. Traverse the array.
3. Update mx with the maximum element.
4. Add every element to sum.
5. Calculate:

       ans = (nums.size() * mx) - sum

6. Return ans.

====================================================================
Complexity:

Approach 1:

Time Complexity:
O(n)

Space Complexity:
O(1)

Approach 2:

Time Complexity:
O(n)

Space Complexity:
O(1)

====================================================================
Code
====================================================================
*/

// Approach 1: Maximum Element + Loop

class Solution
{
public:
    int minMoves(vector<int>& nums)
    {
        int mx = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            mx = max(mx, nums[i]);
        }

        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans + mx - nums[i];
        }

        return ans;
    }
};


// Approach 2: Maximum Element + Sum

class Solution
{
public:
    int minMoves(vector<int>& nums)
    {
        int mx = nums[0];
        int sum = 0;

        for (int x : nums)
        {
            mx = max(mx, x);
            sum = sum + x;
        }

        return (nums.size() * mx) - sum;
    }
};

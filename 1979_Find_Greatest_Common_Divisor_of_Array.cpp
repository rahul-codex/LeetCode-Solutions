/*
====================================================================
Problem: Find Greatest Common Divisor of Array
Platform: LeetCode
Problem No.: 1979
Difficulty: Easy

Problem Statement:
Given an integer array nums, return the greatest common divisor (GCD)
of the smallest and largest numbers in the array.

The GCD of two numbers is the largest positive integer that divides
both numbers without leaving a remainder.

Input:
- An integer array nums.

Output:
- Return the GCD of the minimum and maximum elements.

Example 1:
Input:
nums = [2,5,6,9,10]

Output:
2

Explanation:
Smallest element = 2
Largest element = 10
GCD(2, 10) = 2

Example 2:
Input:
nums = [7,5,6,8,3]

Output:
1

Explanation:
Smallest element = 3
Largest element = 8
GCD(3, 8) = 1

Example 3:
Input:
nums = [3,3]

Output:
3

Explanation:
Smallest element = 3
Largest element = 3
GCD(3, 3) = 3

====================================================================
Approach:

- Traverse the array once to find the minimum and maximum elements.
- Apply the Euclidean Algorithm to compute the GCD of these two numbers.
- Return the computed GCD.

====================================================================
Algorithm:

1. Initialize mn and mx with the first element of the array.
2. Traverse the array:
   - Update mn if a smaller element is found.
   - Update mx if a larger element is found.
3. Use the Euclidean Algorithm:
   - While mx is not zero:
       - rem = mn % mx
       - mn = mx
       - mx = rem
4. Return mn as the GCD.

====================================================================
Complexity:

Time Complexity:
O(n + log(max(nums)))

Space Complexity:
O(1)

====================================================================
*/

class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int mn = nums[0];
        int mx = nums[0];

        // Find minimum and maximum elements
        for (int x : nums)
        {
            if (x < mn)
                mn = x;

            if (x > mx)
                mx = x;
        }

        // Euclidean Algorithm
        while (mx != 0)
        {
            int rem = mn % mx;
            mn = mx;
            mx = rem;
        }

        return mn;
    }
};

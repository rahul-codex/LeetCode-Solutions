/*
====================================================================
Problem: Maximum Product of Two Digits
Platform: LeetCode
Problem No.: 3536
Difficulty: Easy

Problem Statement:
Given a positive integer n, return the maximum product of any two digits
present in n.

Note:
You may use the same digit twice only if it appears more than once.

Input:
- A positive integer n.

Output:
- Return the maximum product of any two digits.

Example 1:
Input:
n = 31

Output:
3

Explanation:
Digits = [3, 1]
Possible product:
3 × 1 = 3

Maximum product = 3

Example 2:
Input:
n = 22

Output:
4

Explanation:
Digits = [2, 2]
Possible product:
2 × 2 = 4

Maximum product = 4

Example 3:
Input:
n = 124

Output:
8

Explanation:
Digits = [1, 2, 4]

Possible products:
1 × 2 = 2
1 × 4 = 4
2 × 4 = 8

Maximum product = 8

====================================================================
Approach:

- Traverse each digit of the number.
- Maintain the largest digit (max1) and the second largest digit (max2).
- Update these values while extracting digits.
- The answer is the product of max1 and max2.

====================================================================
Algorithm:

1. Initialize:
      max1 = 0
      max2 = 0
2. While n is greater than 0:
   - Extract the last digit.
   - If the digit is greater than or equal to max1:
       - Update max2 = max1.
       - Update max1 = digit.
   - Otherwise, if the digit is greater than max2:
       - Update max2 = digit.
   - Remove the last digit from n.
3. Return max1 × max2.

====================================================================
Complexity:

Time Complexity:
O(d)

Space Complexity:
O(1)

where d is the number of digits in n.

====================================================================
*/

class Solution
{
public:
    int maxProduct(int n)
    {
        int max1 = 0;
        int max2 = 0;

        while (n > 0)
        {
            int digit = n % 10;

            if (digit >= max1)
            {
                max2 = max1;
                max1 = digit;
            }
            else if (digit > max2)
            {
                max2 = digit;
            }

            n /= 10;
        }

        return max1 * max2;
    }
};

/*
====================================================================
Problem: Check Divisibility by Digit Sum and Product
Platform: LeetCode
Problem No.: 3622
Difficulty: Easy

Problem Statement:
Given a positive integer n, calculate:

1. The sum of all digits of n.
2. The product of all digits of n.

Add the digit sum and digit product together.

Return true if n is divisible by this total; otherwise, return false.

Input:
- A positive integer n.

Output:
- Return true if n % (digit sum + digit product) == 0.
- Otherwise, return false.

Example 1:
Input:
n = 99

Output:
true

Explanation:
Digit sum = 9 + 9 = 18
Digit product = 9 × 9 = 81
Total = 18 + 81 = 99

Since 99 % 99 == 0, the answer is true.

Example 2:
Input:
n = 23

Output:
false

Explanation:
Digit sum = 2 + 3 = 5
Digit product = 2 × 3 = 6
Total = 5 + 6 = 11

Since 23 % 11 != 0, the answer is false.

====================================================================
Approach:

Use the modulo (%) operator to extract each digit of n.

For every digit:
- Add it to sum.
- Multiply it with product.

After processing all digits, calculate:

    total = sum + product

Finally, check whether the original number is divisible by total.

The original value of n is stored because n is continuously divided
by 10 while extracting its digits.

====================================================================
Algorithm:

1. Store the original value of n.
2. Initialize:
      sum = 0
      product = 1
3. While n > 0:
   - Extract the last digit using n % 10.
   - Add the digit to sum.
   - Multiply the digit with product.
   - Remove the last digit using n /= 10.
4. Calculate:
      total = sum + product
5. Return:
      original % total == 0

====================================================================
Complexity:

Time Complexity:
O(d)

Space Complexity:
O(1)

where d is the number of digits in n.

====================================================================
Code
====================================================================
*/

class Solution
{
public:
    bool checkDivisibility(int n)
    {
        int original = n;
        int sum = 0;
        int product = 1;

        while (n > 0)
        {
            int digit = n % 10;

            sum += digit;
            product *= digit;

            n /= 10;
        }

        int total = sum + product;

        return original % total == 0;
    }
};

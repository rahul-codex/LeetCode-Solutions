/*
====================================================================
Problem: GCD of Odd and Even Sums
Platform: LeetCode
Difficulty: Easy

Problem Statement:
Given an integer n, compute:

- sumOdd  = Sum of the first n positive odd numbers.
- sumEven = Sum of the first n positive even numbers.

Return the Greatest Common Divisor (GCD) of sumOdd and sumEven.

Input:
- An integer n.

Output:
- Return the GCD of sumOdd and sumEven.

Example 1:
Input:
n = 4

Output:
4

Explanation:
sumOdd = 1 + 3 + 5 + 7 = 16
sumEven = 2 + 4 + 6 + 8 = 20

GCD(16, 20) = 4

Example 2:
Input:
n = 5

Output:
5

Explanation:
sumOdd = 1 + 3 + 5 + 7 + 9 = 25
sumEven = 2 + 4 + 6 + 8 + 10 = 30

GCD(25, 30) = 5

Observation:
Sum of the first n odd numbers:
    sumOdd = n²

Sum of the first n even numbers:
    sumEven = n(n + 1)

GCD(n², n(n + 1))
= n × GCD(n, n + 1)

Since consecutive integers are always coprime,

GCD(n, n + 1) = 1

Therefore,

GCD(sumOdd, sumEven) = n

Algorithm:
1. Read the value of n.
2. Observe that:
      sumOdd = n²
      sumEven = n(n + 1)
3. Apply the mathematical property:
      GCD(n², n(n + 1)) = n
4. Return n.

Time Complexity:
O(1)

Space Complexity:
O(1)
====================================================================
*/

class Solution
{
public:
    int gcdOfOddEvenSums(int n)
    {
        return n;
    }
};

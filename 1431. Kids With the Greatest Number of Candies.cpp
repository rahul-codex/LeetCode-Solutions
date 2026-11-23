/*
====================================================================
Problem: Kids With the Greatest Number of Candies
Platform: LeetCode
Problem No.: 1431
Difficulty: Easy

Problem Statement:

There are n kids with candies.

You are given an integer array candies, where candies[i]
represents the number of candies the ith kid has.

You are also given an integer extraCandies, representing
the number of extra candies available.

Return a boolean array result of length n.

result[i] should be true if giving all extraCandies to
the ith kid makes their total candies greater than or
equal to the maximum candies held by any kid.

Multiple kids can have the greatest number of candies.

Input:
- An integer array candies.
- An integer extraCandies.

Output:
- Return a boolean array containing true or false for
  each kid.

Example 1:

Input:
candies = [2, 3, 5, 1, 3]
extraCandies = 3

Output:
[true, true, true, false, true]

Explanation:

Maximum candies = 5.

Kid 1: 2 + 3 = 5  -> true
Kid 2: 3 + 3 = 6  -> true
Kid 3: 5 + 3 = 8  -> true
Kid 4: 1 + 3 = 4  -> false
Kid 5: 3 + 3 = 6  -> true

Example 2:

Input:
candies = [4, 2, 1, 1, 2]
extraCandies = 1

Output:
[true, false, false, false, false]

Explanation:

Maximum candies = 4.

Only the first kid can have at least 4 candies
after receiving the extra candy.

Example 3:

Input:
candies = [12, 1, 12]
extraCandies = 10

Output:
[true, false, true]

====================================================================
Approach:

Maximum Element + Comparison Approach

We use two loops to solve this problem efficiently.

First Loop: Find Maximum Candies

1. Initialize maxCandies = 0.
2. Traverse the candies array.
3. Find the maximum number of candies using max().
4. Store it in maxCandies.

Second Loop: Check Every Kid

1. Traverse the candies array again.
2. Add extraCandies to the current kid's candies.
3. Compare the new total with maxCandies.

Condition:

    candy + extraCandies >= maxCandies

If the condition is true:
- Push true into the result vector.

Otherwise:
- Push false into the result vector.

Finally, return the result vector.

====================================================================
Algorithm:

1. Initialize maxCandies = 0.
2. Traverse all elements of candies.
3. Update maxCandies whenever a larger value is found.
4. Create an empty boolean vector res.
5. Traverse candies again.
6. For each kid, check:

       candy + extraCandies >= maxCandies

7. Push the comparison result into res.
8. Return res.

====================================================================
Complexity:

Time Complexity:
O(n)

- First loop takes O(n) to find the maximum.
- Second loop takes O(n) to check every kid.
- Total time complexity = O(n).

Space Complexity:
O(n)

- The result vector stores n boolean values.
- Extra auxiliary space excluding the output = O(1).

====================================================================
Code
====================================================================
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int maxCandies = 0;

        for (int candy : candies) {

            maxCandies = max(maxCandies, candy);

        }

        vector<bool> res;

        for (int candy : candies) {

            res.push_back(candy + extraCandies >= maxCandies);

        }

        return res;
    }
};

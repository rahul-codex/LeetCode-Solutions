/*
====================================================================
Problem: Merge Strings Alternately
Platform: LeetCode
Problem No.: 1768
Difficulty: Easy

Problem Statement:
You are given two strings word1 and word2. Merge the strings by adding
letters in alternating order, starting with word1.

If one string is longer than the other, append the remaining letters
to the end of the merged string.

Input:
- Two strings: word1 and word2.

Output:
- Return the merged string.

Example 1:
Input:
word1 = "abc"
word2 = "pqr"

Output:
"apbqcr"

Explanation:
Characters are taken alternately from both strings.

Example 2:
Input:
word1 = "ab"
word2 = "pqrs"

Output:
"apbqrs"

Explanation:
After merging alternately, the remaining characters of word2
are appended.

Example 3:
Input:
word1 = "abcd"
word2 = "pq"

Output:
"apbqcd"

Explanation:
After merging alternately, the remaining characters of word1
are appended.

====================================================================
Approach:

Use two pointers to traverse both strings simultaneously.

- Add one character from word1.
- Then add one character from word2.
- Continue until one string ends.
- Finally, append the remaining characters of the longer string.

====================================================================
Algorithm:

1. Initialize two indices i and j to 0.
2. Create an empty string ans.
3. While both strings have characters:
   - Append word1[i] to ans.
   - Append word2[j] to ans.
   - Increment i and j.
4. Append the remaining characters of word1, if any.
5. Append the remaining characters of word2, if any.
6. Return the merged string.

====================================================================
Complexity:

Time Complexity:
O(n + m)

Space Complexity:
O(n + m)

where:
n = length of word1
m = length of word2

====================================================================
*/

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int i = 0, j = 0;
        string ans;

        while (i < word1.length() && j < word2.length())
        {
            ans += word1[i++];
            ans += word2[j++];
        }

        while (i < word1.length())
        {
            ans += word1[i++];
        }

        while (j < word2.length())
        {
            ans += word2[j++];
        }

        return ans;
    }
};

/*
====================================================================
Problem: Valid Parentheses
Platform: LeetCode
Problem No.: 20
Difficulty: Easy

Problem Statement:
Given a string s containing only the characters '(', ')', '{', '}',
'[' and ']', determine whether the input string is valid.

A string is valid if:
1. Every opening bracket is closed by the same type of bracket.
2. Brackets are closed in the correct order.
3. Every closing bracket has a corresponding opening bracket.

Input:
- A string containing only parentheses, curly brackets, and square
  brackets.

Output:
- Return true if the string is valid.
- Return false otherwise.

Example 1:
Input:
s = "()"

Output:
true

Example 2:
Input:
s = "()[]{}"

Output:
true

Example 3:
Input:
s = "(]"

Output:
false

Example 4:
Input:
s = "([])"

Output:
true

Example 5:
Input:
s = "([)]"

Output:
false

====================================================================
Approach:

Use a stack to keep track of opening brackets.

- Whenever an opening bracket is found, push it into the stack.
- Whenever a closing bracket is found:
  - Check if the stack is empty.
  - Check whether the top opening bracket matches the closing bracket.
  - If it matches, remove it from the stack.
  - Otherwise, the string is invalid.
- At the end, the stack must be empty for the string to be valid.

An additional check is made at the beginning:
If the string length is odd, it cannot contain properly matched
pairs, so we immediately return false.

====================================================================
Algorithm:

1. Create an empty stack of characters.
2. If the length of the string is odd, return false.
3. Traverse the string from left to right.
4. If the current character is an opening bracket:
   - Push it into the stack.
5. Otherwise:
   - If the stack is empty, return false.
   - Check whether the top of the stack matches the current
     closing bracket.
   - If it does not match, return false.
   - Otherwise, pop the top element.
6. After traversing the complete string:
   - If the stack is empty, return true.
   - Otherwise, return false.

====================================================================
Complexity:

Time Complexity:
O(n)

Space Complexity:
O(n)

====================================================================
*/

class Solution
{
public:
    bool isValid(string str)
    {
        stack<char> st;

        if (str.length() % 2 != 0)
            return false;

        for (int i = 0; i < str.length(); i++)
        {
            // Opening brackets
            if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                st.push(str[i]);
            }

            // Closing brackets
            else
            {
                if (st.empty())
                    return false;

                if ((st.top() == '(' && str[i] == ')') ||
                    (st.top() == '{' && str[i] == '}') ||
                    (st.top() == '[' && str[i] == ']'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

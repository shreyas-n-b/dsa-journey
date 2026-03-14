# Longest Palindromic Substring

**Date:**  
**Difficulty:**  

---

## Problem
Given a string `s`, return the **longest palindromic substring** in `s`.

A palindrome is a string that reads the same forward and backward.

---

## Approach (Expand Around Center)

- Iterate through each index `i` and treat it as a **possible center of a palindrome**.
- Expand around two centers: `(i, i)` for **odd-length palindromes** and `(i, i+1)` for **even-length palindromes**.
- While expanding, move the left pointer left and the right pointer right as long as characters match and indices stay within bounds.
- Track the **maximum palindrome length and its starting index**, then return the corresponding substring.

---

## Patterns Learnt
- using two pointers (left,right) and doing symmetric comparison about the pivot.
- two possible expansion owing to possibilities of length of substring being even and odd. 
- keep track of max along the way and return max finally.

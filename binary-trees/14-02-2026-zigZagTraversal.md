Date: 14 Feb 2026
Difficulty: medium
## Problem
zig-zag level order traversal of a binary tree.
## Approach
1. Logic same as level order traversal, maintain a flag to indicate left to right or right
to left.
2. use currCount - to specify the no.of nodes at current level and nextCount - to specify no.of nodes
at next level. keep Negating the flag after each level.
## Complexity
Time: O(n)
Space: O(n)
## What I learned
1. How to use flag to indicate left-to-right or right-to-left traversal.
2. Use of currCount and nextCount to indicate the transition from one level to 
next level.

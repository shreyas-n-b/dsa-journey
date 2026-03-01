# Count Nodes in a Complete Binary Tree

**Date:** 25-02-2026  
**Difficulty:** Medium  

---

## Problem
Count the total number of nodes in a complete binary tree.

---

## Approach
Compare the height of the leftmost and rightmost paths.
- If heights are equal → subtree is a perfect binary tree, directly compute nodes using formula.
- Otherwise, recursively count nodes in left and right subtrees.

---

## Learning
- Recursion works by breaking an unfavourable large problem into smaller favourable subproblems.
- In this problem, the favourable case is identifying a perfect binary subtree and solving it in O(1).

# Boundary Traversal of Binary Tree
**Date:** 15 Feb 2026  
**Difficulty:** Medium
##  Problem
Print boundary nodes in anti-clockwise order.
##  Approach
Divide traversal into three parts:
1. Left boundary (excluding leaf nodes).
   Move left if possible, otherwise move right.

2. Leaf nodes.
   Traverse the tree and collect nodes having no children.

3. Right boundary (excluding leaf nodes).
   Similar to left boundary, but store in stack to print in reverse.
##  Complexity
Time: O(n)  
Space: O(n) in worst case (skewed tree).
##  What I Learned
Boundary problems require careful handling to avoid duplicates.
Separating traversal into parts simplifies logic.

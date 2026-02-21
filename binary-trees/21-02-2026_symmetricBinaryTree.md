# Symmetric Tree

**Date:** 21-02-2026  
**Difficulty:** Easy  

---

## Idea
Use recursive DFS to compare the left and right subtrees simultaneously.

For symmetry:
- left->val must equal right->val  
- left->left must mirror right->right  
- left->right must mirror right->left  

---

## Complexity
Time: O(n)  
Space: O(h) 

---

## Learning / Mistakes
Initially thought comparing preorder and reverse preorder traversals was sufficient, but structure must also mirror, not just values.

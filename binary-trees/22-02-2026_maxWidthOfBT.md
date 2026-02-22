# Maximum Width of Binary Tree

**Date:** 22-02-2026  
**Difficulty:** Medium  

---

## 🧠 Problem
Return the maximum width of a binary tree.  
Width of a level is defined as the distance between the leftmost and rightmost non-null nodes at that level (including null positions in between).

---

## 💡 Idea

Use level-order traversal (BFS) while assigning an index to each node as if the tree were a complete binary tree.

For a node with index `i`:
- Left child → `2*i + 1`
- Right child → `2*i + 2`

For each level:
- Normalize indices by subtracting the minimum index of that level. (prevention of overflow)
- Track the first and last index.
- Width = `last_index - first_index + 1`

---

## ⏱️ Complexity

Time: O(n)  
Space: O(W) where W is the maximum width of the tree.

---

## 📘 Key Learnings

- Width must be computed strictly level-by-level.
- Never mix current-level logic with next-level insertions.
- Index normalization prevents overflow and keeps numbers small.

# Construct Binary Tree from Preorder and Inorder Traversal

**Date:** 26-02-2026  
**Difficulty:** Medium  

---

## Approach
- Use the first element of preorder traversal as the root node.
- Locate the root in inorder traversal to divide the tree into left and right subtrees.
- Partition preorder traversal using the size of the left subtree.
- Recursively construct left and right subtrees.
- Attach subtrees during recursion backtracking.

---

## Complexity
Time: O(n)  
Space: O(n) (recursion stack + hashmap storage)

---

## Learnings
- Map iterators point to `pair<key, value>` objects.
- When accessing iterator values by reference, they should be treated as `const` if modification is not required.
- Temporary objects cannot safely be referenced using pointers passed by reference.
- Dynamic allocation (`new`) is required when returning or storing node pointers created inside functions.

# Minimum Time to Burn a Binary Tree

**Date:** 24-02-2026  
**Difficulty:** Medium  

---

## Problem
Given the root of a binary tree and a target node, find the minimum time required to burn the entire tree when fire spreads each second to a node’s left child, right child, and parent.

---

## Approach
- Perform a level-order traversal to store parent pointers (`node → parent`).
- Treat the tree as an undirected graph.
- Start BFS from the target node.
- Use a visited hashmap to avoid revisiting nodes.
- Track distance level-by-level; burn time equals maximum BFS depth.

---

## Mistakes
- Forgot to mark `visited[target] = true`, causing incorrect traversal in some cases.
- Distance was incremented before queue exhaustion check, leading to an extra count; final answer required returning `dist - 1`.

---

## Learnings
- Maintaining parent pointers enables upward traversal in tree problems.
- Many tree burning / spreading problems reduce to BFS on an implicit graph.

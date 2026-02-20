# Bottom View of Binary Tree

**Date:** 19-02-2026  
**Difficulty:** Medium  

---

## Idea
Use level-order traversal (BFS) while tracking vertical levels.

Store values in a map:
vertical_level → node_value

Since BFS processes nodes level by level, later (deeper/right) nodes overwrite earlier ones at the same vertical level, naturally producing the bottom view.

---

## Complexity
Time: O(n log n)  
Space: O(n)

---

## Learnings / Mistakes
- Initial DFS approach was more complex and less clean.
- Learned when BFS is more suitable than DFS.
- Practiced use of map and ordering behavior.

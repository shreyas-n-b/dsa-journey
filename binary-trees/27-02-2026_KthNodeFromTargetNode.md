# All Nodes at Distance K in Binary Tree

**Date:** 23-02-2026  
**Difficulty:** Medium  

---

## 🧠 Problem
Given the root of a binary tree, a target node, and an integer `k`, return all node values that are exactly `k` distance away from the target node.

---

## 💡 Approach

### Step 1: Parent Mapping
Perform a level-order traversal (BFS) to build a hashmap:
node->parent
This allows upward traversal in the tree.

### Step 2: BFS from Target
Start a BFS from the target node while tracking visited nodes to avoid revisiting.

From each node, explore:
- left child  
- right child  
- parent node  

Increase distance level-by-level.  
When distance equals `k`, return all nodes currently in the queue.

---

## ⏱️ Complexity
Time: O(n)  
Space: O(n)

---

## 📘 Key Learning
- Storing parent references effectively converts a binary tree into an **undirected graph**.
- Once treated as a graph, BFS can be performed starting from any node, not just the root.

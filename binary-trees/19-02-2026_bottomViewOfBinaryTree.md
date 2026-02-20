# given a binary tree return a vector containing the elements from bottom view of binary 
# tree

**Date:19-02-2026**
**Difficulty:medium**

## Idea
1. use a map to store unique key-value pair, here the unique key-value pair would be of
node->vertical_line. Traverse through the tree using level-order traversal.
2. since the map stores unique elements, the last traversed nodes automatically over-write
the previously traversed nodes at same vertical and horizontal level.

## Complexity
Time: O(n) - for all cases
space: O(n) - as the map will store at max n/2 elements.

## Learnings/mistakes
-I tried doing it using depth first search(preorder) but my solution was less 
time and space efficient.
-I learnt to use comparators, multisets, sets, maps in this question.

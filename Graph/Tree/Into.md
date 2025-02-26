## What is a Tree? 
    A tree is a hierarchical data structure that consists of nodes connected by edges.

### Key Features of a Tree:
- **Root Node** – The topmost node of the tree (starting point).
- **Parent & Child Nodes** – Nodes that are connected; the parent has one or more children.
- **Leaf Node**– A node with no children.
- **Edge** – The connection between two nodes.
- **Depth** – The number of edges from the root to a given node.
- **Height** – The number of edges in the longest path from the root to a leaf.

### Ancestor in a Tree
    An ancestor of a node in a tree is any node that appears on the path from the root to that node.

### **Types of Binary Trees** 🌳

A **binary tree** is a tree where each node has at most **two children** (left and right). There are different types of binary trees based on specific properties.

---

## **1. Full Binary Tree**  
A binary tree where **every node has either 0 or 2 children**.  
📌 **Example:**  
```
        1
       / \
      2   3
     / \    
    4   5    
```
- ✅ Every node has either **two children (2, 3, 4, 5) or no children (leaf nodes).**

---

## **2. Complete Binary Tree**  
A binary tree where **all levels are completely filled**, except possibly the last level, which is filled from **left to right**.  
📌 **Example:**  
```
        1
       / \
      2   3
     / \  /
    4   5 6
```
- ✅ Last level is **filled from left to right**.

---

## **3. Perfect Binary Tree**  
A binary tree where **all internal nodes have 2 children, and all leaf nodes are at the same level**.  
📌 **Example:**  
```
        1
       / \
      2   3
     / \  / \
    4   5 6  7
```
- ✅ **Height = log₂(n + 1) - 1**, where **n** is the number of nodes.

---

## **4. Balanced Binary Tree**  
A binary tree where the height of the left and right subtrees of any node **differs by at most 1**.  
📌 **Example:**  
```
        1
       / \
      2   3
     / \   \
    4   5   6
```
- ✅ **Height difference between left and right subtrees is at most 1.**
- ✅ **Binary Search Trees (BST) and AVL Trees are balanced.**

---

## **5. Degenerate (Skewed) Binary Tree**  
A tree where **each parent node has only one child**, forming a structure like a linked list.  
📌 **Example (Right-Skewed):**  
```
    1
     \
      2
       \
        3
         \
          4
```
📌 **Example (Left-Skewed):**  
```
    1
   /
  2
 /
3
/
4
```
- ✅ **Worst case for tree operations (O(n) complexity).**

---

## **6. Binary Search Tree (BST)**  
A binary tree where **left subtree values < root < right subtree values**.  
📌 **Example:**  
```
        8
       / \
      3   10
     / \    \
    1   6    14
       / \   /
      4   7 13
```
- ✅ Efficient **search, insert, and delete operations (O(log n) in balanced BSTs).**

---

## **7. AVL Tree (Self-Balancing BST)**  
A **Balanced BST** where the height difference between left and right subtrees is **at most 1**.  
📌 **Example:**  
```
        30
       /  \
      20   40
     /  \
    10   25
```
- ✅ **Self-balancing BST** (uses rotations to maintain balance).
- ✅ **Operations (insert, delete, search) run in O(log n) time**.

---

## **8. Red-Black Tree (Self-Balancing BST)**  
A self-balancing BST that follows special **coloring rules**:  
1. Every node is **either red or black**.  
2. Root is always **black**.  
3. No two consecutive **red** nodes.  
4. Every path from a node to its **null child** has the same number of **black nodes**.  
📌 **Example:**  
```
        10 (Black)
       /    \
     5 (Red)  20 (Black)
```
- ✅ **Used in databases and system libraries (e.g., C++ STL `map`, `set`).**

---

### **Summary Table 📋**
| Type | Definition |
|------|------------|
| **Full Binary Tree** | Every node has **0 or 2 children** |
| **Complete Binary Tree** | **All levels are filled**, except last (filled left to right) |
| **Perfect Binary Tree** | **All internal nodes have 2 children** and **all leaves are at the same level** |
| **Balanced Binary Tree** | Height difference between left and right subtrees is **≤1** |
| **Degenerate (Skewed) Binary Tree** | Each node has **only one child** (like a linked list) |
| **Binary Search Tree (BST)** | Left subtree < Root < Right subtree |
| **AVL Tree** | **Self-balancing BST** (height difference ≤1) |
| **Red-Black Tree** | **Self-balancing BST with red/black coloring rules** |


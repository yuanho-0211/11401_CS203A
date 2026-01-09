## Study Note: tree

## Description
- **tree**: A tree is a non-linear hierarchical data structure consisting of nodes connected by edges.
- **binary tree**: A binary tree is a hierarchical data structure in which each node has at most two children.
- **binary search tree**: A Binary Search Tree is a binary tree with an ordering property (left < parent < right).
- **Balanced Tree**: A tree where the heights of left and right subtrees of any node differ by at most 1 (e.g., AVL tree, Red-Black tree).
- **AVL Tree**: BST with height balancing (difference ≤ 1)
- **Red-Black Tree**: BST with color rules to maintain balance
- **Heap (Min/Max)**: Complete binary tree where parent is smaller/larger than children
- **Trie (Prefix Tree)**: Tree for storing strings, useful for autocomplete/dictionary
- **Segment Tree / Interval Tree**: Tree for range queries
- B-Tree / B+ Tree: Balanced trees for databases / file systems
## Visualization
### tree
```c
            (Root)
          /    |    \
        A      B      C
      / | \          / \
     D  E  F        G   H
      
```

### binary tree
```c
             A
          /   \
        B       C
       / \     / \
      D   E   F   G
           
```

### binary search tree
```c
            8
          /   \
        4       12
       / \     /  \
      2   6   10   14
 
```
## AVL Tree (Balanced BST Example)
```c
            8
          /   \
        4       12
       / \     /  \
      2   6   10   14
```
Height difference between left and right subtree ≤ 1

## Terminology
| Term             | Definition                 |
| ---------------- | -------------------------- |
| Root             | Topmost node               |
| Parent           | Node with children         |
| Child            | Node derived from a parent |
| Leaf             | Node with no children      |
| Sibling          | Nodes sharing same parent  |
| Edge             | Connection between nodes   |
| Level            | Distance from root         |
| Height           | Longest path to leaf       |
| Degree (Fan-out) | Number of children         |

## Tree Family Hierarchy

| Level | Type         | Constraint     |
| ----- | ------------ | -------------- |
| 1     | Tree         | No restriction |
| 2     | Binary Tree  | ≤ 2 children   |
| 3     | BST          | Ordering rule  |
| 4     | Balanced BST | Height control |


## Characteristics

- **hierarchical structure**: Trees have no cycles and are commonly used for representing hierarchical relationships.
- **Tree**: No fixed number of children. General hierarchical structure.
- **balanced tree**: Ensures that the height difference between subtrees is minimized.
- **BFT**: Visiting nodes level by level using a queue.
- No cycles.

## Traversal Methods

| Traversal Type        | Description                        | Order                                    |
| --------------------- | ---------------------------------- | ---------------------------------------- |
| **Pre-order**         | Visit root → left → right          | Root first                               |
| **In-order**          | Visit left → root → right          | Left-root-right (BST gives sorted order) |
| **Post-order**        | Visit left → right → root          | Root last                                |
| **Level-order (BFT)** | Visit level by level using a queue | BFS                                      |

## Traversal Example
For tree:
```c
    A
   / \
  B   C
```
| Traversal   | Result |
| ----------- | ------ |
| Pre-order   | A B C  |
| In-order    | B A C  |
| Post-order  | B C A  |
| Level-order | A B C  |

## Tree Representation
- Parent array
- Child list
- Left-child right-sibling
- Binary tree conversion
- Array representation (heap style)

## Insert/Delete in BST
### Insert
- Start at root
- Compare value: go left if smaller, right if larger
- Repeat until finding a NULL position → insert node

### Delete
Three cases:
- Node is a leaf → remove directly
- Node has one child → replace node with child
- Node has two children → find in-order successor (smallest node in right subtree), replace node, delete successor

## AVL/Red-Black Trees
- After insert/delete, may need rotations to maintain balance.

## Balanced vs Unbalanced Trees
```c
Balanced:        Unbalanced:

   8                1
  / \                \
 4  12                2
                       \
                        3
```
- Balanced Tree: AVL, Red-Black, ensures O(log n) operations
- Unbalanced Tree: Can degenerate to linked list → O(n) operations

### Balanced Trees
| Type      | Rule                  |
| --------- | --------------------- |
| AVL       | Height difference ≤ 1 |
| Red-Black | Color rules           |
| B-Tree    | Multi-key nodes       |



## Time/Space

- **Insert**: O(log ｎ)
- **Delete**: O(log ｎ)

## ADT: Binary Tree
- BinaryTree Create()
- IsEmpty(bt)
- MakeBT(left, data, right)
- Lchild(bt)
- Rchild(bt)
- Data(bt)


## Limitations
- **Performance**: If one side of the tree becomes too deep (degenerate),  performance drops from O(log n) to O(n) as bad as a linked list.
- **Modifications**: Trees require careful operations in many steps.

## Pros/Cons
- **Pros**: Balanced trees provide O(log n) search/insert/delete.
- **Cons**: Unbalanced trees may have poor performance.

## Applications
- BST / Balanced BST: Search engines, dictionaries, sets
- Heap: Priority queue, task scheduling
- Trie: Autocomplete, dictionary lookup
- Segment Tree: Range sum, min/max queries
- B-Tree / B+ Tree: Database indexing, file system organization
- Expression Tree: Evaluate arithmetic expressions
- Game Trees: AI decision making (e.g., chess)

## Key Takeaways
- Tree = non-linear, hierarchical, unlike arrays or linked lists
- Binary tree = at most 2 children per node
- Binary Search Tree = ordered → efficient search/insert/delete
- Balanced trees ensure O(log n) operations
- Traversals are essential: pre-order, in-order, post-order, level-order
- Advanced trees (AVL, Red-Black, Heap, Trie, B-Tree) handle balance, ordering, and efficiency


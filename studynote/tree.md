## Study Note: tree

## Description
- **tree**: A tree is a non-linear hierarchical data structure consisting of nodes connected by edges.
- **binary tree**: A binary tree is a hierarchical data structure in which each node has at most two children.
- **binary search tree**: A Binary Search Tree is a binary tree with an ordering property (left < parent < right).
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
## Characteristics

- **hierarchical structure**: Trees have no cycles and are commonly used for representing hierarchical relationships.
- **Tree**: No fixed number of children. General hierarchical structure.
- **balanced tree**: Ensures that the height difference between subtrees is minimized.
- **BFT**:Visiting nodes level by level using a queue.


## Time/Space

- **Insert**: O(log ｎ)
- **Delete**: O(log ｎ)


## Limitations
- **Performance**: If one side of the tree becomes too deep (degenerate),  performance drops from O(log n) to O(n) as bad as a linked list.
- **Modifications**: Trees require careful operations in many steps.

## Pros/Cons
- **Pros**: Balanced trees provide O(log n) search/insert/delete.
- **Cons**: Unbalanced trees may have poor performance.


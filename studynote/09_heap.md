## Study Note: heap

## Description
- **heap**: A heap is a specialized tree-based data structure that satisfies the heap property.
- **max heap**: In a max heap, the value of each parent node is greater than or equal to the values of its children.
- **min heap:**:In a min heap, the value of each parent node is less than or equal to the values of its children.
## Visualization
### max heap
```c
            10
          /    \
        8        9
       / \      /
      3   5    4

```

### min heap
```c
            1
          /   \
        3       4
       / \     /
      6   5   8

 
```
## Characteristics

- **complete binary tree**: All levels are fully filled except possibly the last level, which is filled from left to right.
- **Max heap**:parent ≥ children.
- **Min heap**:parent ≤ children
- **array representation**: Heaps are commonly implemented using arrays.


## Time/Space

- **Insert**: O(log ｎ)
- **Delete**: O(log ｎ)
- **Peek (min/max)**: O(1)
- **Build heap**: O(ｎ)


## Limitations
- **Root**: root element is min or max.
- **Modifications**: Trees require careful operations in many steps.

## Pros

- Efficient access to the minimum or maximum element.
- O(log n) insertion and deletion.

## Cons
- Does not maintain full ordering like a binary search tree.

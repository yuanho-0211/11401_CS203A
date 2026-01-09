## Study Note: heap

## Description

- **heap**: A heap is a specialized tree-based data structure that satisfies the heap property.
- **max heap**: In a max heap, the value of each parent node is greater than or equal to the values of its children.
- **min heap**:In a min heap, the value of each parent node is less than or equal to the values of its children.
- **Array Representation**: Heaps are usually implemented using arrays for efficient indexing.
 
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
- No ordering between siblings → only guarantees parent-child relation
- Efficient root access → O(1) to get max/min
- Common applications: Priority queue, scheduling, sorting

## Heap Operations

### Insert

- Add element at the end of the array (last position)
- Heapify-up / Bubble-up: Compare with parent → swap if violates heap property
- Repeat until heap property restored
- Time Complexity: O(log n)

### Delete Root (Extract Max / Min)

- Replace root with last element
- Heapify-down / Bubble-down: Swap root with largest/smallest child if heap property violated
- Repeat until heap property restored
- Time Complexity: O(log n)

### Peek Root

- Return root element (max or min)
- Time Complexity: O(1)

### Build Heap (Heapify)

- Given an array, transform it into a heap
- Start from last non-leaf node → heapify down
- Time Complexity: O(n)

## Heapify Explanation:

- Heapify-up (after insertion): Compare with parent, swap if violated → repeat until root or property restored.

- Heapify-down (after root deletion): Compare with largest/smallest child, swap if violated → repeat until leaf or property restored.


## Time/Space

- **Insert**: O(log ｎ)
- **Delete**: O(log ｎ)
- **Peek (min/max)**: O(1)
- **Build heap**: O(ｎ)


## Limitations

- **Root**: root element is min or max.
- **Modifications**: Trees require careful operations in many steps.

## Applications

- Priority Queue: Tasks processed by priority
- CPU Scheduling: Shortest job or highest priority first
- Heapsort: Sorting with guaranteed O(n log n)
- Graph Algorithms: Dijkstra’s, Prim’s algorithm
- Event-driven simulation

## Pros

- Efficient access to the minimum or maximum element.
- O(log n) insertion and deletion.

## Cons
- Does not maintain full ordering like a binary search tree.

## Key Takeaways

- Heap = complete binary tree + heap property
- Max heap → root is largest, Min heap → root is smallest
- Efficient operations: insert/delete O(log n), peek O(1)
- Array implementation is space-efficient and supports fast indexing
- Ideal for priority-based operations but not for full-order access

# Study Note: Linked List

## Description
Linked List: Elements are stored in sequence, but not in contiguous memory locations.Each node contains data and a pointer to the next node.

## Visualization
```c
Head → [data | next] → [data | next] → [data | next] → NULL
```

## Characteristics

- **Pointer-based structure**: Each node stores data and a pointer to the next node.
- **Memory allocation**: Non-contiguous, each node allocated dynamically.
- **Sequential access**: Must traverse the list from the head to access an element.

## Time/Space
- **Access**: O(n)
- **Search**: O(n)
- **Insert at front**: O(1)
- **Insert at middle**: O(n)

## Limitations
- **No random access** :Cannot access elements by index ,must traverse from the head.
- **Extra memory overhead:**: Requires extra memory for pointers.
- **Implementation**: More complex due to pointer handling.

## Pros/Cons
- **Pros**: Efficient insertions and deletions at arbitrary positions.
- **Cons**: Extra memory for pointers.

# Study Note: Stack and Queue

## Description
- **Stack**: It is a data structure that follows the LIFO rule. Elements are added and removed only from the top.
- **Queue**: It is a data structure that follows the FIFO rule. Elements are inserted at the rear and removed from the front.  

## Visualization
### Stack
```c
Top →      [   ]
           [   ]
           [   ]
           [   ]
Bottom →   [   ]

```
### Queue
```c
Front 
Rear
 ↓ ↓
[   ] → [   ] → [   ] → [   ] → [   ]

```
## Characteristics
### Stack
- **LIFO**: Last element inserted is the first one removed.
- **Direction**: Both operations happen at the top.

### Queue
- **FIFO**: First element inserted is the first removed.
- **Direction**: Input at rear, output at front.

## Types -Stack
### Array-based Stack
- Fixed size or dynamic (resizable)
- Top index points to last element

### Linked-list Stack
- Dynamic size, no overflow (except memory)
- Top pointer points to head node

## Types -Queue
### Simple Queue (Array)
- Fixed size
- Dequeue shifts elements left → O(n)

### Circular Queue
- Reuses empty slots → O(1) enqueue/dequeue

### Linked-list Queue
- Dynamic size, uses head/tail pointers

## Operations
## Stack Operations
| Operation          | Description             | Time Complexity |
| ------------------ | ----------------------- | --------------- |
| `push(x)`          | Add element x at top    | O(1)            |
| `pop()`            | Remove top element      | O(1)            |
| `peek()` / `top()` | Return top element      | O(1)            |
| `isEmpty()`        | Check if stack is empty | O(1)            |

## Queue Operations
| Operation            | Description               | Time Complexity                         |
| -------------------- | ------------------------- | --------------------------------------- |
| `enqueue(x)`         | Add element at rear       | O(1) with circular array or linked list |
| `dequeue()`          | Remove element from front | O(1)                                    |
| `front()` / `peek()` | Return front element      | O(1)                                    |
| `isEmpty()`          | Check if queue is empty   | O(1)                                    |



## Time/Space
### Stack
- **Array**: O(1) push/pop (if no resize)
- **Linked list**: O(1) push/pop at head

### Queue
- **Array**: O(1) enqueue/dequeue with circular buffer
- **Linked list**: O(1) enqueue at tail and dequeue at head

## Limitations
### Stack
- **Overflow**: An array overflows if its capacity is exceeded.

### Queue
- **Pointer**: Array requires managing two pointers. Usually implemented as circular array to reuse space. Linked list has no overflow unless memory exhausted.


## Pros/Cons
### Stack
- **Pros**: Push and pop operations are performed efficiently.
- **Cons**: Array may waste unused slots if not full.

### Queue
- **Pros**: Enqueue and dequeue are efficient operations.
- **Cons**: Circular array may overflow.

## Common Mistakes
- Stack: Forgetting to update top pointer after push/pop
- Queue: Forgetting to wrap-around indices in circular array
- Not checking empty/full conditions
- Memory leaks in linked list implementations

## Applications
### Stack

- Undo/Redo functionality

### Queue

- process scheduling
-BFS (Breadth First Search)
-task scheduling


## Key Takeaways

- Stack: LIFO, single-end access, good for temporary storage, undo, recursion
- Queue: FIFO, dual-end access, good for scheduling and buffering
- Both can be implemented using arrays or linked lists depending on size constraints and operation frequency
- Understanding Stack and Queue is essential before learning advanced data structures like priority queue, deque, or graph algorithms

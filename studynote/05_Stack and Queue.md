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
- Top pointer controls operations

### Queue
- **FIFO**: First element inserted is the first removed.
- **Direction**: Input at rear, output at front.
- Front & Rear pointers

## ADT View
### ADT Stack

- CreateS(size)
- IsEmpty()
- IsFull()
- Push(x)
- Pop()
- Peek()

### ADT Queue

- CreateQ(size)
- IsEmptyQ()
- IsFullQ()
- Enqueue(x)
- Dequeue()
- Front()

## Types -Stack
### Array-based Stack
- Fixed size or dynamic (resizable)
- Top index points to last element
- Overflow possible

### Linked-list Stack
- Dynamic size
- Top pointer points to head node
- No overflow unless memory full
- Extra pointer overhead

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

### Implementation

### Stack (Array)
```c
push(x):
if top == MAX-1 → overflow
else stack[++top] = x

pop():
if top == -1 → underflow
else return stack[top--]
```

### Queue (Circular Array)
```c
enqueue(x):
rear = (rear+1)%MAX
queue[rear] = x

dequeue():
front = (front+1)%MAX
return queue[front]
```
- Empty: front == rear
- Full: (rear+1)%MAX == front

## Linked List Version
### Stack
- Push → insert at head
- Pop → remove head

### Queue

- Enqueue → insert at tail
- Dequeue → remove head

### Special case:
When queue becomes empty → rear = NULL

## Time/Space
### Stack
- **Array**: O(1) push/pop (if no resize)
- **Linked list**: O(1) push/pop at head

### Queue
- **Array**: O(1) enqueue/dequeue with circular buffer
- **Linked list**: O(1) enqueue at tail and dequeue at head

## Time / Space
| Structure | Array | Linked List |
| --------- | ----- | ----------- |
| Stack     | O(1)  | O(1)        |
| Queue     | O(1)  | O(1)        |

### Space:
- Array: fixed, may waste
- Linked list: pointer overhead

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

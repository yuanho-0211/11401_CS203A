# Study Note: Linked List 

## Description

Linked List: Elements are stored in sequence, but not in contiguous memory locations. Each node contains data and a pointer to the next node.

## Visualization

```c
Head → [data | next] → [data | next] → [data | next] → NULL
```

## Characteristics

- **Pointer-based structure**: Each node stores data and a pointer to the next node.
- **Memory allocation**: Non-contiguous, each node allocated dynamically.
- **Sequential access**: Must traverse the list from the head to access an element.

## Types of Linked Lists

### Singly Linked List (SLL)

-Each node points only to the next node
-Traversal is forward only
-Head → Node1 → Node2 → Node3 → NULL

### Doubly Linked List (DLL)

- Each node has prev and next pointers
- Traversal can be forward or backward

```c
NULL ← [prev|data|next] ↔ [prev|data|next] ↔ [prev|data|next] → NULL
```
### Circular Linked List

- Last node points back to the head
- Can be singly or doubly linked

```c
Head → Node1 → Node2 → Node3 → Head
```

## Insert/Delete

- Insert 25 after node 1
  
```c
Before: 10 → 20 → 30 → 40 → NULL
After : 10 → 20 → 25 → 30 → 40 → NULL
```

- Delete node with value 20

```c
Before: 10 → 20 → 30 → 40 → NULL
After : 10 → 30 → 40 → NULL
```

## Insert Operations

- At head

```c
Node* newNode = malloc(sizeof(Node));
newNode->data = 10;
newNode->next = head;
head = newNode;  // O(1)
```

- At tail

```c
Node* newNode = malloc(sizeof(Node));
newNode->data = 20;
newNode->next = NULL;
tail->next = newNode;  // O(1 if tail pointer exists, else O(n))
tail = newNode;
```

- At middle (after a given node)

```c
Node* newNode = malloc(sizeof(Node));
newNode->data = 15;
newNode->next = prevNode->next;
prevNode->next = newNode;  // O(1 after reaching prevNode)
```

## Delete Operations

- Delete head

```c
Node* temp = head;
head = head->next;
free(temp);  // O(1)
```


- Delete tail
  
```c
Traverse to the node before tail
Update its next pointer to NULL
Free tail node
O(n) if no tail pointer
```

-Delete middle node

```c
Traverse to previous node
Update prev->next = target->next
Free target node
O(n)
```

## Advanced Edge Cases

### Empty List

```c
 head == NULL
```

- All operations must check this first
  
```c
if (head == NULL) return;
```

### Single Node List

```c
 head->next == NULL
```

Special care is needed for:
- delete head
- delete tail
- reverse

### Delete by Value vs Delete by Position

## Delete by Value

- Removes the first occurrence of a value
- Requires tracking:
  
```c
prev
curr
```

### Delete by Position

- Removes the k-th node
- Traverse to position k-1

## When to Use Linked List

- Frequent insert/delete operations
- Size of data changes dynamically
- Data does not need random access

## When Not to Use Linked List

- Need fast access by index
- Memory overhead is a concern
- Contiguous memory access is required
  
## Time/Space

- **Access**: O(n)
- **Search**: O(n)
- **Insert at front**: O(1)
- **Insert at middle**: O(n)

### Time Complexity Clarification (Common Exam Trap)

- Insert/Delete is O(1) only if the node is already known
- Searching for a node is always O(n)

## Pointer Manipulation (Core Skill)

- The efficiency of linked lists comes from changing pointers, not moving data
  
### Incorrect pointer order may cause:

- Lost nodes
- Infinite loops
- Dangling pointers

## Doubly vs Singly Linked List

| Feature            | Singly LL | Doubly LL    |
| ------------------ | --------- | ------------ |
| Memory             | Lower     | Higher       |
| Backward traversal | No        | Yes          |
| Delete known node  | O(n)      | O(1)         |
| Pointer updates    | Simple    | More complex |

### When to use DLL

- Frequent deletions
- Navigation in both directions (e.g., browser history)


## Sorting Linked Lists

### Why Array Sorting Logic Doesn’t Fully Apply

- No direct indexing
- Swapping nodes is expensive

### Common Approach

- Swap data (simpler, but may break data integrity)
- Swap pointers (harder, but more correct)

## Memory Management Best Practices

- Every malloc must have a matching free

### Always check:

- Empty list
- Single-node list
- Head and tail operations

### Common Memory Errors

- Memory leaks
- Dangling pointers
- Double free
- NULL pointer dereference

## Sentinel (Dummy) Node Technique

- Add a fake head node
- Simplifies insert/delete logic
- Reduces special-case handling

```c
dummy->next = head;
```

### Used heavily in:

- Sorting
- Deletion by value
- Merging lists

## Limitations

- **No random access** :Cannot access elements by index ,must traverse from the head.
- **Extra memory overhead:**: Requires extra memory for pointers.
- **Implementation**: More complex due to pointer handling.

## Pros/Cons

- **Pros**: Efficient insertions and deletions at arbitrary positions.
- **Cons**: Extra memory for pointers.

## Common Mistakes

- Forgetting to update head/tail pointer after insert/delete
- Forgetting to free memory (leads to memory leak)
- Accessing NULL pointer
- Confusing singly vs doubly insert/delete operations

## Applications of Linked List

- Implementing Stacks and Queues
- Representing adjacency lists in graphs
- Dynamic memory allocation in OS
- Music playlists

## Linked List vs Array

### Array

- Fast random access
- Slow insert/delete
- Cache-friendly

### Linked List

- Fast insert/delete (if position is known)
- Slow access
- Cache-unfriendly

## Key Takeaways

- Linked list trades memory and sequential access for dynamic insert/delete efficiency
- Good for queues, stacks, and dynamic data storage

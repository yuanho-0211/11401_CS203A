## Study Note: Stack vs Queue

| Feature                | Stack                                            | Queue                                            |
|------------------------|--------------------------------------------------|--------------------------------------------------|
| **Structure**          | Linear data structure, LIFO (Last In First Out)  | Linear data structure, FIFO (First In First Out) |
| **Primary Operations** | `push` (insert), `pop` (remove)                  | `enqueue` (insert), `dequeue` (remove)           |
| **Access**             | O(1) for top element                             | O(1) for front/rear element                      |
| **Insertion**          | O(1) at top                                      | O(1) at rear                                     |
| **Deletion**           | O(1) from top                                    | O(1) from front                                  |
| **Memory usage**       | Depends on implementation (array or linked list) | Depends on implementation (array or linked list) |
| **Use case**           | Undo operations                                  | task management, BFS traversal                   |
| **Advantages**         | Simple and efficient for LIFO operations         | Simple and efficient for FIFO operations         |
| **Limitations**        | Cannot access elements in the middle directly    | Cannot access elements in the middle directly    |

### Key Points
- **Stack**: Last element added is the first to be removed (LIFO).  
- **Queue**: First element added is the first to be removed (FIFO).  

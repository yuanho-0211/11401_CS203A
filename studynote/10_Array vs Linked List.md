# Study Note: Array vs Linked List

| Feature               | Array                                              | Linked List                                     |
|--------------------   |----------------------------------------------------|-------------------------------------------------|
| **Structure**         | Contiguous memory allocation                       | Nodes connected via pointers                    |
| **Size**              | Fixed (static) or resizable (dynamic)              | Dynamic, can grow or shrink easily              |
| **Access**            | O(1) by index                                      | O(n) by index (must traverse from head)         |
| **Search**            | O(n) linear search                                 | O(n) linear search                              |
| **Insertion**         | O(n) in general (shifting elements)                | O(1) at head, O(n) at middle or tail            |
| **Deletion**          | O(n) (shifting elements)                           | O(1) at head, O(n) at middle or tail            |
| **Memory usage**      | May waste memory if allocated larger than needed   | Extra memory required for pointers in each node |
| **Cache performance** | Excellent (due to contiguous memory)               | Poorer (nodes scattered in memory)              |
| **Use case**          | Frequent random access, fewer insertions/deletions | Frequent insertions/deletions, dynamic size     |

### Key Points
- **Array**: Best for scenarios requiring **fast random access**, with few insertions/deletions.  
- **Linked List**: Best for scenarios with **frequent insertions or deletions**, but slower random access and worse cache performance.

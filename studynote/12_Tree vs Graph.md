## Study Note: Tree vs Graph

| Feature                  | Tree                                                 | Graph                                               |
|--------------------------|------------------------------------------------------|-----------------------------------------------------|
| **Structure**            | Hierarchical, acyclic, rooted                        | Non-linear, can have cycles, no fixed root          |
| **Nodes / Vertices**     | Called nodes                                         | Called vertices                                     |
| **Edges**                | Each edge connects parent to child                   | Each edge connects any two vertices                 |
| **Edge Direction**       | Usuallyundirected  from parent to child              | Can be directed or undirected                       |
| **Hierarchy**            | Strict parent-child relationship                     | No strict hierarchy, flexible connections           |
| **Cycles**               | Not allowed (acyclic)                                | Allowed                                             |
| **Connectivity**         | Always connected                                     | Can be connected or disconnected                    |
| **Insertion / Deletion** | O(log n) in balanced trees                           | Depends on implementation; adjacency list or matrix |
| **Advantages**           | Easy to represent hierarchy, efficient search in BST | Can model complex relationships, flexible           |
| **Limitations**          | Poor performance if unbalanced                       | Traversal/search can be costly, more complex        |

### Key Points
- **Tree**: A special type of graph with hierarchical structure and no cycles.  
- **Graph**: General structure, more flexible, can represent complex relationships beyond hierarchy.

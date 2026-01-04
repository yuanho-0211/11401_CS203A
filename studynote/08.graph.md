# Study Note: Graph

## Description

- **Graph**: A graph is a non-linear data structure consisting of **vertices (nodes)** and **edges**.
- **Undirected graph**: Edges have no direction; the connection between two vertices is bidirectional.
- **Directed graph (digraph)**: Edges have direction, representing one-way relationships.
- **Weighted graph**: Each edge is associated with a weight (cost, distance, or time).

## Visualization

### Undirected graph

```c
    A ----- B
    |       |
    |       |
    C ----- D
```

### Directed graph

```c
    A  -->  B
    ^       |
    |       v
    D  <--  C
```

### Weighted graph

```c
    A --5-- B
    |       \
   2|        3
    |         \
    C --4--  D
```

## Characteristics

- **Non-linear structure**: Graphs are non-linear and can model complex many-to-many relationships.
- **Cycles allowed**: Graphs may contain cycles.
- **Connected / Disconnected**: A graph can be connected or disconnected.

**Representation**:
- **Adjacency Matrix**
- **Adjacency List**

## Traversal

**BFS (Breadth-First Search)**:
- Visits vertices level by level.
- Uses a queue
- Commonly used for shortest paths in unweighted graphs.
  
**DFS (Depth-First Search)**:
- Explores as deep as possible before backtracking.
- Uses a **stack** or recursion.
- Commonly used for cycle detection and topological sorting.

## Time / Space Complexity

- Adjacency Matrix Space Complexity: O(V²)
- Adjacency List Space Complexity: O(V + E)

## Limitations

**Implementation**: Requires careful handling of visited states and cycles.

## Pros / Cons

**Pros**:

- Highly flexible.
- Capable of representing complex algorithms and implementations.
  
 **Cons**:
- More complex algorithms and implementations.
- Performance and memory usage must be carefully considered for large graphs.

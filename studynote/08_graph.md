# Study Note: Graph

## Description

- **Graph**: A graph is a non-linear data structure consisting of **vertices (nodes)** and **edges**.
- **Undirected graph**: Edges have no direction; the connection between two vertices is bidirectional.
- **Directed graph (digraph)**: Edges have direction, representing one-way relationships.
- **Weighted graph**: Each edge is associated with a weight (cost, distance, or time).
- **Unweighted Graph**: All edges are considered equal (weight = 1).

## Visualization

### Undirected graph

```c
    A ----- B
    |       |
    |       |
    C ----- D
```
- All connections are bidirectional.
- Traversal can move freely in either direction along an edge.

### Directed graph

```c
    A  -->  B
    ^       |
    |       v
    D  <--  C
```
- Each edge has a direction.
- Movement is restricted to the arrow direction.

### Weighted graph

```c
    A --5-- B
    |       \
   2|        3
    |         \
    C --4--  D
```
- Numbers on edges represent weights.
- Used in shortest-path problems like Dijkstra’s algorithm.
  
## Types of Graphs

- Simple Graph: No loops, no multiple edges between same vertices
- Multigraph: Can have multiple edges between same pair of vertices
- Cyclic Graph: Contains at least one cycle
- Acyclic Graph: No cycles (e.g., DAG – Directed Acyclic Graph)
- Connected Graph: All vertices are reachable from any other vertex
- Disconnected Graph: Some vertices cannot be reached from others
 -Complete Graph: Every pair of vertices is connected by an edge

## Characteristics

- **Non-linear structure**: Graphs are non-linear and can model complex many-to-many relationships.
- **Cycles allowed**: Graphs may contain cycles.
- **Connected / Disconnected**: A graph can be connected or disconnected.

## **Representation**:

**Adjacency Matrix**
- A 2D array matrix[V][V]
- matrix[i][j] = 1 if an edge exists
- For weighted graphs: matrix[i][j] = weight

### Properties

- Space Complexity: O(V²)
- Edge lookup: O(1)

### Advantages

- Very fast edge existence check
- Simple to implement
- Suitable for dense graphs

### Disadvantages

- Wastes memory for sparse graphs
- Traversing neighbors costs O(V)

**Adjacency List**

- An array of lists
- Each index represents a vertex
- Each list stores neighboring vertices

### Properties

- Space Complexity: O(V + E)

### Advantages

- Efficient for sparse graphs
- Faster traversal (BFS / DFS)
- Easy to scale to large graphs

### Disadvantages

- Slower edge lookup (O(degree))
- Slightly more complex implementation

## Example:
Consider a simple undirected graph with nodes A, B, C, D and edges:

```c
A ↔ B
A ↔ C
B ↔ D
C ↔ D
```

Graphical representation:

```c
    A
   / \
  B---C
   \ /
    D
```

### Adjacency Matrix

|   | A | B | C | D |
| - | - | - | - | - |
| A | 0 | 1 | 1 | 0 |
| B | 1 | 0 | 0 | 1 |
| C | 1 | 0 | 0 | 1 |
| D | 0 | 1 | 1 | 0 |

- Explanation: Rows represent the starting node, columns represent the ending node.
- 1 indicates an edge exists; 0 indicates no edge.

### Adjacency List

```c
A: B → C
B: A → D
C: A → D
D: B → C
```

- Explanation: Each node lists its connected nodes.
- More space-efficient for sparse graphs.

## Sparse vs Dense Graph:

- Sparse: E ≪ V², Adjacency List preferred
- Dense: E ≈ V², Adjacency Matrix preferred
  
## Traversal

**BFS (Breadth-First Search)**:
- Visits vertices level by level.
- Uses a **queue**
- Commonly used for shortest paths in unweighted graphs.

### Applications

- Shortest path
- Network broadcasting
- Level-order traversal
- Checking bipartiteness
  
**DFS (Depth-First Search)**:
- Explores as deep as possible before backtracking.
- Uses a **stack** or recursion.
- Commonly used for cycle detection and topological sorting.

### Applications

- Cycle detection
- Topological sorting
- Connected components
- Detecting strongly connected components 

## Time / Space Complexity

| Representation   | Space Complexity | Edge Lookup | Traversal |
| ---------------- | ---------------- | ----------- | --------- |
| Adjacency Matrix | O(V²)            | O(1)        | O(V²)     |
| Adjacency List   | O(V + E)         | O(degree)   | O(V + E)  |


## Operations

| Operation          | Adjacency Matrix | Adjacency List |
| ------------------ | ---------------- | -------------- |
| Check edge         | O(1)             | O(degree)      |
| Add edge           | O(1)             | O(1)           |
| Remove edge        | O(1)             | O(degree)      |
| Traverse all edges | O(V²)            | O(V + E)       |
| Space              | O(V²)            | O(V + E)       |


## Limitations

**Implementation**: Requires careful handling of visited states and cycles.

## Applications

- Social Networks: Friends as vertices, relationships as edges
- Web Graphs: Pages as nodes, hyperlinks as directed edges
- Navigation Systems: Cities as vertices, roads as weighted edges
- Dependency Resolution: Tasks as vertices, dependencies as directed edges
- Networking: Routers, switches, and data routing
- Recommendation Systems: Users/items as nodes, interactions as weighted edges

## Pros / Cons

**Pros**:

- Highly flexible, models complex relationships
- Supports wide range of algorithms
- Can represent both static and dynamic networks
  
 **Cons**:
 
- Algorithm implementation can be complex
- Memory and performance must be considered for large graphs
- Handling cycles, weighted edges, and dynamic updates requires care

## Key Takeaways

- Graph = non-linear, flexible, complex relationships
- Representation choice matters: matrix vs list
- Traversal methods: BFS for level-order / shortest path, DFS for deep exploration / cycle detection
- Graph algorithms = core of many CS applications: shortest path, MST, topological sort, network analysis

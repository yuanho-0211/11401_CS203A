## Data Structures – Introduction (Summary)

## What Is Data?
- Data: Facts, statistics, or values collected for reference or analysis.
- Data can be discrete or continuous and represents information such as quantity, quality, or symbols.

## What Is a Structure?
- A structure is the arrangement and organization of interrelated elements in a system or object.

## Data Structures

- A data structure is a way of organizing and storing data so it can be accessed and used efficiently.

- It consists of:

```c
Data values
Relationships among data
Operations applied to the data
```

## Classification of Data Structures
### (1) By Memory Behavior
###     Static Data Structures
- Fixed memory size
- Easier to access

### Dynamic Data Structures
- Memory size can change at runtime
- Allow random updates during execution

### (2) By Type

### Primitive Data Structures
- Store a single value
- Examples: int, char, float, double, pointer

### Non-Primitive Data Structures

#### Linear Data Structures

- Elements stored sequentially
- Examples: lists, stacks, queues

#### Non-Linear Data Structures

- Elements organized in hierarchical or network forms
- Examples: tables, trees, graphs

## Data Structure Operations
### Core Operations (CRUD)

- Insert – add an element
- Read – access an element
- Update – modify an element
- Delete – remove an element

### Status Operations
- isEmpty – check if empty
- isFull – check if full
- count – number of elements
- capacity – maximum size
- clear – remove all elements

### Advanced Operations

- Search
- Sort
- Set operations
```c
union
intersection
difference
symmetric difference
```

- Structure-specific
```c
push / pop (stack)
enqueue / dequeue (queue)
peek / front / rear
traverse (BFS, DFS, etc.)
reverse, rotate
```

## Performance Analysis

### Time Complexity
- Measures execution time relative to input size

### Space Complexity
- Measures memory usage relative to input size

## Asymptotic Notation

- O (Big-Oh) – Upper bound (worst case)
- Ω (Omega) – Lower bound (best case)
- Θ (Theta) – Tight bound (average case)

### Common Time Complexities

- O(1) – Constant
- O(log n) – Logarithmic
- O(n) – Linear
- O(n log n) – Linearithmic
- O(n²) – Quadratic
- O(n³) – Cubic
- O(2ⁿ) – Exponential
- O(n!) – Factorial

## Abstract Data Type (ADT)

-  An ADT defines:
```c
What operations are available
Not how they are implemented
```

- It is programming-language independent
- Focuses on specification, not implementation

### Example: ADT NaturalNumber

- Objects: integers from 0 to INT_MAX
- Operations:
```c
Zero
IsZero
Equal
Successor
Add
Subtract
```

## ADT vs. Data Type

| ADT                   | Data Type                   |
| --------------------- | --------------------------- |
| Conceptual model      | Language-specific           |
| Defines operations    | Defines values + operations |
| Hides implementation  | Implementation exposed      |
| Example: Stack, Queue | Example: int, list, dict    |


## Data Types in Programming Languages

### C

- Static typing
- Manual memory management
- Arrays, structs, pointers

### Java

- Static, strongly typed
- Automatic memory management
- Primitives and reference types
- Collections (List, Set, Map)

### Python

- Dynamic, strongly typed
- Automatic garbage collection
- Built-in collections: list, dict, set

### JavaScript

- Dynamic, duck-typed
- Automatic memory management
- Primitives and objects (Array, Map, Set)

## ADT and Software Engineering

### ADT ≈ Specification
- Defines what the system should do

### Implementation ≈ Code

- Defines how it is built

### ADTs help achieve:

- Abstraction
- Modularity
- Maintainability

## Overall Summary

- Data Structures
- Abstract Data Types (ADT)
- Data Types in Programming Languages

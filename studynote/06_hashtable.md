# Study Note: Hash Table

## Description

Hash Table: A Hash Table is a data structure that stores key–value pairs by using a hash function to map each key to an index in an array.
Its goal is to achieve constant-time average performance for search, insertion, and deletion.

## Visualization

```c

[   ] → [data | next] → [data | next] → NULL
[   ] → [data | next] → [data | next] → NULL
[   ] → [data | next] → [data | next] → NULL
[   ] → [data | next] → [data | next] → NULL
  ↑
bucket[index]
```

## Characteristics

- **Collision handling**: Using chaining or open addressing.
- **Hash function**: Hash function converts keys into bucket indexes.
- Structure: Array + Linked List (or probing array)
- Index-based access
- Unique keys
- Dynamic resizing supported
- Unordered data

### Explanation:

- The array represents buckets.
- Each bucket may contain a linked list (chaining).
- The index is computed from the hash function.

## Hash Function Methods

### Division Method

- Idea: Use the remainder of key divided by table size.
- Formula:
```c
h(k) = k % m
```
### Characteristics:

- Simple and fast.
- Table size m is usually prime to reduce collisions.

### Example:

```c
Key = 123, Table size = 10
Hash index = 123 % 10 = 3
```

### Multiplication Method
- Idea: Multiply key by a constant A, take the fractional part, multiply by table size.
- Formula:

```c
h(k) = floor(m * (k * A % 1))
```
### Characteristics:
- Produces more uniform distribution.

### Example:
```c
Key = 123, A = 0.618, Table size = 10
Hash index = floor(10 * ((123 * 0.618) % 1)) = 1
```

## Folding Method
- Idea: Break the key into parts, sum them, then take modulo table size.
### Characteristics:

- Useful for large numeric or string keys.
- Can be combined with addition, XOR, or concatenation.

### Example:

```c
Key = 123456, Table size = 100
Split: 12, 34, 56 → sum = 12+34+56 = 102
Hash index = 102 % 100 = 2
```

## Clustering

### Description

Clustering occurs in hash tables using open addressing when multiple keys probe the same sequence of slots, causing performance degradation.

### Primary clustering: 

- Occurs when collisions cause long sequences of occupied slots.

### Secondary clustering: 

Occurs when keys with the same initial hash index follow the same probe sequence, even if other slots are free.

### Characteristics

| Clustering Type      | Cause                               | Effect                                               |
| -------------------- | ----------------------------------- | ---------------------------------------------------- |
| Primary Clustering   | Linear probing                      | Long consecutive blocks → slower inserts/search      |
| Secondary Clustering | Quadratic probing or double hashing | Only keys with same hash index collide → less severe |


## Load Factor

- Definition: α = n / number_of_buckets
```c
α = n / m
n = number of elements
m = number of buckets

```
- Low load factor → faster, more memory
- High load factor → slower, more collisions
- Common strategy: resize table when α > 0.7

| Load Factor | Effect                  |
| ----------- | ----------------------- |
| Low α       | Faster, more memory     |
| High α      | Slower, more collisions |


## Hash Function

- A hash function converts a key into an integer index:
```c
index = hash(key) % table_size
```
### A good hash function should be:

- Deterministic
- Uniformly distributed
- Efficient to compute
- Minimizes Collision

### Table Size

- Prime numbers are preferred for table size (e.g., 101, 1009, 10007)

## Collision Handling

### Chaining

```c

Bucket[index] → Node1 → Node2 → Node3 → NULL
```

- Easy to implement
- Can handle unlimited collisions (linked list grows)
- Performance degrades if chains become long
- Pros: Easy to implement, simple resizing.
- Cons: Extra memory for pointers; long chains degrade performance.

### Open Addressing

- Linear Probing: Check next slot sequentially
- Quadratic Probing: Check next slot with quadratic offs
- Double Hashing: Use second hash function to find slot
- Pros: Saves memory (no extra pointers).
- Cons: Performance degrades when load factor is high; deleted slots require careful handling.

| Method            | Formula       | Characteristics                     |
| ----------------- | ------------- | ----------------------------------- |
| Linear Probing    | (h(k)+i)%m    | Simple, primary clustering          |
| Quadratic Probing | h(k)+i²       | Less clustering, may skip slots     |
| Double Hashing    | h1(k)+i·h2(k) | Best distribution, more computation |


## Operations

## Insert

- Compute index: index = hash(key) % N
- If using chaining: insert new node at head of bucket list
- If using open addressing: find next empty slot
- Time Complexity: O(1) average, O(n) worst case if many collisions

## Search

- Compute index: index = hash(key) % N
- Traverse bucket (chaining) or probe sequence (open addressing)
- Time Complexity: O(1) average, O(n) worst case

## Delete

- Compute index: index = hash(key) % N
- Remove node from bucket or mark slot as deleted in open addressing
- Time Complexity: O(1) average, O(n) worst case

## Time/Space

- **Search**: O(1)
- **Insert**: O(1)
- **Delete**: O(1)
- 
### Chaining

| Operation | Average  | Worst |
| --------- | -------- | ----- |
| Search    | O(1 + α) | O(n)  |
| Insert    | O(1)     | O(n)  |
| Delete    | O(1)     | O(n)  |

### Open Addressing

| Operation | Average | Worst |
| --------- | ------- | ----- |
| Search    | O(1)    | O(n)  |
| Insert    | O(1)    | O(n)  |
| Delete    | O(1)    | O(n)  |


## Limitations

- **Collisions**: Multiple keys may hash to the same index, requiring extra handling.　
- **Hash function**: Poor hash function leads to clustering.

## Applications

- Symbol tables in compilers.
- Caches (e.g., LRU caches).
- Databases indexing.
- Programming language dictionaries or sets (Python dict, Java HashMap, C++ unordered_map).

## Pros/Cons

- **Pros**: Extremely fast insertion and deletion.
- **Cons**: Requires good hashing and load-factor management.

## Key Takeaways

- Hash Table = array + hash function + collision handling
- Extremely efficient for key-based access
- Choose good hash functions and manage load factor for best performance
- Fundamental for map, dictionary, and set implementations

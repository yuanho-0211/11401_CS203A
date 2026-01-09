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
###A good hash function should be:
- Deterministic
- Uniformly distributed
- Efficient to compute

### Table Size

- Prime numbers are preferred for table size (e.g., 101, 1009, 10007)
- This reduces repeated patterns and collisions

## Collision Handling
### Chaining
```c

Bucket[index] → Node1 → Node2 → Node3 → NULL
```
- Easy to implement
- Can handle unlimited collisions (linked list grows)
- Performance degrades if chains become long

### Open Addressing

- Linear Probing: Check next slot sequentially
- Quadratic Probing: Check next slot with quadratic offs
- Double Hashing: Use second hash function to find slot

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

## Pros/Cons
- **Pros**: Extremely fast insertion and deletion.
- **Cons**: Requires good hashing and load-factor management.

## Key Takeaways
- Hash Table = array + hash function + collision handling
- Extremely efficient for key-based access
- Choose good hash functions and manage load factor for best performance
- Fundamental for map, dictionary, and set implementations

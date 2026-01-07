# Study Note: Hash Table

## Description
Hash Table: The array structure where data (key–value pairs) are stored.Using a hash function to convert each key into an index.

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

## Load Factor
- Definition: α = n / number_of_buckets
- Low load factor → faster, more memory
- High load factor → slower, more collisions
- Common strategy: resize table when α > 0.7

## Collision Handling
### Chaining
```c

Bucket[index] → Node1 → Node2 → Node3 → NULL
```
- Easy to implement
- Can handle unlimited collisions (linked list grows)

### Open Addressing

- Linear Probing: Check next slot sequentially
- Quadratic Probing: Check next slot with quadratic offs
- Double Hashing: Use second hash function to find slot

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

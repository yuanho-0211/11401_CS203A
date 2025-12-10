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

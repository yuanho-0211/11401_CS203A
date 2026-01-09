# Study Note: Array

## Description

Array: Array are elements stored in contiguous memory locations. Each element can be accessed directly using an index. It provides constant-time access to elements. It is an efficient method.

## Visualization
```c
Index:   0       1        2         3         4         5         6
Array: [   ]   [   ]    [   ]     [   ]     [   ]     [   ]     [   ]       
```

## Characteristics

- **Indexed access**: Each element can be accessed directly using its index.
- **Fixed size**: The size of an array is determined at creation and cannot be changed dynamically (in static arrays).
- **Contiguous memory allocation**: Elements are stored in contiguous memory locations.

## Basic Example

```c
int arr[5] = {10, 20, 30, 40, 50};
```
- arr[0] is the first element
- arr[4] is the last element
- Index always starts from 0

## How to Access Elements

```c
int x = arr[2];  // x = 30
arr[1] = 25;     // update element
```

- Direct access by index
- No need to loop to find the value

## Traversing an Array

```c
for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}
```
- Used to visit every element
- Time complexity: O(n)

## Insert Operation (Insert 25 at index 2)

```c
Before: [10, 20, 30, 40]
After : [10, 20, 25, 30, 40]
```
- Elements after index must shift right
- Time complexity: O(n)

## Delete Operation (Delete element at index 1)

```c
Before: [10, 20, 30, 40]
After : [10, 30, 40]
```
- Elements must shift left
- Time complexity: O(n)

## When to Use Array

- Size is known in advance
- Need fast access by index
- Data stored sequentially

## When Not to Use Array

- Frequent insert/delete in the middle
- Size changes often
- Very large data requiring non-contiguous memory

## Memory Representation

- Array elements are stored continuously in memory
- All elements have the same data type, so each element occupies the same amount of memory
- Memory address of an element can be calculated directly

## Index Out of Bounds

- Valid index range: 0 to size - 1

```c
int arr[5];
arr[5] = 10;   // invalid
arr[-1] = 20;  // invalid
```

## Static Array vs Dynamic Array

### Static Array

- Size fixed at declaration
- Allocated on the stack (typically)
- Fast access
-Cannot be resized
- Example:
```c
int arr[10];
```

### Dynamic Array

- Size determined at runtime
- Allocated on the heap
- Can be resized using realloc
- Requires manual memory management
- Can be resized (with extra cost)
- Example:
```c
int* arr = (int*)malloc(n * sizeof(int));
```

### Important Notes

- realloc may return the same memory address
- Or it may allocate a new block and copy data
- Old pointers may become invalid

### Safe usage:

```c
int* temp = realloc(arr, newSize * sizeof(int));
if (temp != NULL) {
    arr = temp;
}
```

### Multidimensional Array

- Arrays can have more than one dimension
- Commonly used for tables or matrices
- Example (2D array):
```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```
Access element: matrix[1][2] → 6

## Memory Layout

## One-Dimensional Array

```c
int arr[4] = {10, 20, 30, 40};
```

```c
| 10 | 20 | 30 | 40 |
```

- Stored in contiguous memory locations
- 
## Two-Dimensional Array (Row-Major Order)

```c
int matrix[2][3];
```

```c
Row 0 → [ ][ ][ ]
Row 1 → [ ][ ][ ]
```

- Rows are stored consecutively
- Entire row is stored before moving to the next

## Searching in Array

### Linear Search

- Used for unsorted arrays
- Time complexity: O(n)
```c
for (int i = 0; i < n; i++) {
    if (arr[i] == target) return i;
}
```

### Binary Search

- Requires a sorted array
- Divides search space in half each step
- Time complexity: O(log n)

## Sorting with Arrays

### Bubble Sort

- Repeatedly compares adjacent elements
- Simple but inefficient
- Time complexity: O(n²)

### Selection Sort

- Finds the minimum element in each pass
- Fewer swaps
- Time complexity: O(n²)

### Insertion Sort

- Inserts elements into their correct position
- Efficient for small or nearly sorted arrays
- Best case: O(n)

## Arrays as Building Blocks

### Arrays are used to implement:

- Stack
- Queue
- Heap
- Hash Table
- Graph adjacency matrix
- 
## Common Mistakes

- Assuming index starts from 1
- Forgetting array size is fixed
- Accessing out-of-bounds index
- Confusing array length with last index
- Forgetting to free() dynamic arrays
- Using old pointers after realloc
- Mixing up row and column indices in 2D arrays
- Confusing array size with capacity

## Time/Space

- **Access**: O(1)
- **Update**: O(1)
- **Insert**: O(ｎ)
- **Delete**: O(ｎ)
- **Traverse**: O(ｎ)

## Limitations

- **Fixed size**: Static arrays have a fixed size.　
- **Capacity limitation**: Static arrays must be specified at declaration. If more capacity is needed, a new array must be created and data copied. Dynamic arrays can resize, but each resize requires allocating a new contiguous memory block and copying data.
- **High cost**: Inserting or deleting elements in the middle requires more time.
- **Contiguous memory requirement**: For very large arrays, the system may fail to find enough contiguous space.

## Pros/Cons

- **Pros**: Fast random access.
- **Cons**: Insertions and deletions require shifting elements, making them costly.

## Key Takeaways

- Array provides fast and direct access using index
- Memory is contiguous and fixed in size
- Best choice when size is known and access speed is critical
- Understanding arrays is essential before learning other data structures

## Summary

- Fast access, simple structure
- Fixed size, costly insert/delete
- Foundation of many other data structures

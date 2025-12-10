# Study Note: Array

## Description
Array:Array are elements stored in contiguous memory locations. Each element can be accessed directly using an index. It provides constant-time access to elements. It is an efficient method.

## Visualization
```c
Index:   0       1        2         3         4         5         6

Array: [   ]   [   ]     [   ]     [   ]     [   ]     [   ]     [   ]       


## Characteristics

- **Indexed access**:Each element can be accessed directly using its index.
- **Fixed size**:The size of an array is determined at creation and cannot be changed dynamically (in static arrays).
- **Contiguous memory allocation**:Elements are stored in contiguous memory locations.

## Time/Space
- **Access**:O(1)
- **Update**:O(1)
- **Insert**:O(ｎ)
- **Delete**:O(ｎ)
- **Traverse**:O(ｎ)

## Limitations
- **Fixed size**:Static arrays have a fixed size.　
- **Capacity limitation**:Static arrays must be specified at declaration. If more capacity is needed, a new array must be created and data copied. Dynamic arrays can resize, but each resize requires allocating a new contiguous memory block and copying data.
- **High cost**:Inserting or deleting elements in the middle requires more time.
- **Contiguous memory requirement**:For very large arrays, the system may fail to find enough contiguous space.

## Pros/Cons
- **Pros**:Fast random access.
- **Cons**:Insertions and deletions require shifting elements, making them costly.


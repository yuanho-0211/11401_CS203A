## CS203A – Data Structures 
### Practice 1: Code Review and Improvement
- Review the provided incomplete array demo code.
- Complete the code to enhance safety, readability, and correctness.

### Practice 2: Exploring Array Behavior
- Use the example C code to study how memory is allocated using malloc and realloc.
- Add the following line to monitor memory addresses during execution:
```c
printf("Index %d -> Value: %d, Address: %p\n", i, array[i], (void*)&array[i]);
```
- Compare the memory layout before and after reallocation.
- Extend to 2D, 3D, or higher-dimensional arrays.
- Run the program multiple times to observe memory addresses during the initial allocation with malloc and the subsequent expansion with realloc.

### Practice III: Exploring Linked List Behavior

- Use the example C code to study how linked lists allocate and free memory.
- Add debug statements to print each node’s memory address during creation and deletion:
```c
printf("Node %d -> Address: %p, Value: %d\n", i, (void*)current_node, current_node->value);
```
- Observe how memory is allocated for each node and freed when the list is destroyed.
- Try different operations such as insertion, deletion, and traversal to understand how linked lists manage memory dynamically.
- Compare the memory behavior of linked lists with arrays .
- Run the program multiple times to notice any changes in memory addresses.

# Homework Assignment IV: Hash Function Design & Observation (C/C++ Version)

This assignment focuses on the design and observation of hash functions using C/C++. 
Students are expected to implement and analyze the behavior of hash functions, 
evaluate their efficiency, and understand their applications in computer science.

Developer: [yuanho-0211]  
Email: [ho950211@gmail.com]  

## My Hash Function
### Integer Keys 
- Formula / pseudocode:
  ```text
  [h(k)=floor(m*(k*A mod1))]
  ```
- Rationale: [Because of the uniform distribution and simple computation.After  moding 1 and applying the floor, the resulting index sequence is less likely to be concentrated in a few positions, reducing collisions.]

### Non-integer Keys
- Formula / pseudocode:
  ```text
  [h(s)=(sigma s[i]*p^i)mod m]
  ```
- Rationale: [Simple computation using accumulation.Reducing the likelihood of collisions between different strings.]

## Experimental Setup
- Table sizes tested (m): 10, 11, 37
- Test dataset:
  - Integers: 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60
  - Strings: "cat", "dog", "bat", "cow", "ant", "owl", "bee", "hen", "pig", "fox"
- Compiler: GCC and G++
- Standard: C23 and C++23

## Results
| Table Size (m) | Index Sequence         | Observation              |
|----------------|------------------------|--------------------------|
| 10             | 9, 5, 2, 8, ...        | More uniform |
| 11             | 10, 6, 2, 9, ...       | More uniform             |
| 37             | 36, 22, 7, 30 , ...    | More uniform             |

## Compilation, Build, Execution, and Output

### Compilation
- The project uses a comprehensive Makefile that builds both C and C++ versions with proper flags:
  ```bash
  # Build both C and C++ versions
  make all
  
  # Build only C version
  make c
  
  # Build only C++ version
  make cxx
  ```

### Manual Compilation (if needed)
- Command for C:
  ```bash
  gcc -std=c23 -Wall -Wextra -Wpedantic -g -o C/hash_function C/main.c C/hash_fn.c
  ```
- Command for C++:
  ```bash
  g++ -std=c++23 -Wall -Wextra -Wpedantic -g -o CXX/hash_function_cpp CXX/main.cpp CXX/hash_fn.cpp
  ```

### Clean Build Files
- Remove all compiled files:
  ```bash
  make clean
  ```

### Execution
- Run the compiled binary:
  ```bash
  ./hash_function
  ```
  or
  ```bash
  ./hash_function_cpp
  ```

### Result Snapshot
- Example output for integers:
  ```
  === Hash Function Observation (C Version) ===

  === Table Size m = 10 ===
  Key     Index
  -----------------
  21      9
  22      5
  23      2
  24      8
  25      4
  26      0
  27      6
  28      3
  29      9
  30      5
  51      5
  52      1
  53      7
  54      3
  55      9
  56      6
  57      2
  58      8
  59      4
  60      0


  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      10
  22      6
  23      2
  24      9
  25      4
  26      0
  27      7
  28      3
  29      10
  30      5
  51      5
  52      1
  53      8
  54      4
  55      10
  56      6
  57      2
  58      9
  59      5
  60      0

  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      36
  22      22
  23      7
  24      30
  25      16
  26      2
  27      25
  28      11
  29      34
  30      20
  51      19
  52      5
  53      27
  54      13
  55      36
  56      22
  57      8
  58      31
  59      17
  60      3
  

  === Hash Function Observation (C++ Version) ===

  === Table Size m = 10 ===
  Key     Index
  -----------------
  21      9
  22      5
  23      2
  24      8
  25      4
  26      0
  27      6
  28      3
  29      9
  30      5
  51      5
  52      1
  53      7
  54      3
  55      9
  56      6
  57      2
  58      8
  59      4
  60      0
  

  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      10
  22      6
  23      2
  24      9
  25      4
  26      0
  27      7
  28      3
  29      10
  30      5
  51      5
  52      1
  53      8
  54      4
  55      10
  56      6
  57      2
  58      9
  59      5
  60      0

  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      36
  22      22
  23      7
  24      30
  25      16
  26      2
  27      25
  28      11
  29      34
  30      20
  51      19
  52      5
  53      27
  54      13
  55      36
  56      22
  57      8
  58      31
  59      17
  60      3

- Example output for strings:
  ```
  === String Hash (m = 10) ===
  Key     Index
  -----------------
  cat     2
  dog     4
  bat     1
  cow     9
  ant     3
  owl     8
  bee     0
  hen     5
  pig     0
  fox     3

  === String Hash (m = 11) ===
  Key     Index
  -----------------
  cat     6
  dog     4
  bat     5
  cow     1
  ant     0
  owl     8
  bee     3
  hen     1
  pig     6
  fox     8

  === String Hash (m = 37) ===
  Key     Index
  -----------------
  cat     30
  dog     34
  bat     29
  cow     17
  ant     24
  owl     29
  bee     20
  hen     17
  pig     8
  fox     19

- Observations: Outputs align with the analysis, showing better distribution with prime table sizes.
- Example output for integers:
  ```
  Hash table (m=10): [9, 5, 2, 8, 4, 0, 6, 3, 9, 0]
  Hash table (m=11): [10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
  Hash table (m=37): [20, 21, 22, 23, 24, 25, 26, 27, 28, 29, ...]
  ```
- Example output for strings:
  ```
  Hash table (m=10): ["cat", "dog", "bat", "cow", "ant", ...]
  Hash table (m=11): ["fox", "cat", "dog", "bat", "cow", ...]
  Hash table (m=37): ["bee", "hen", "pig", "fox", "cat", ...]
  ```
- Observations: Outputs align with the analysis, showing better distribution with prime table sizes.

## Analysis
- Prime vs non-prime `m`: Prime table sizes generally result in better distribution and fewer collisions.
- Patterns or collisions: Non-prime table sizes tend to produce repetitive patterns, leading to more collisions.
- Improvements: Use a prime table size and a well-designed hash function to enhance distribution.

## Reflection
1. Designing hash functions requires balancing simplicity and effectiveness to minimize collisions.
2. Table size significantly impacts the uniformity of the hash distribution, with prime sizes performing better.
3. The design using a prime table size and a linear transformation formula produced the most uniform index sequence.

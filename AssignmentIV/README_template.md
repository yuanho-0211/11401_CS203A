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
  [h(k)=floor(m*(k*A mod1))] A = 0.6180339887
  ```
- Rationale: [This formula is a simple computation.Choosing A with more decimal places pruduces a more uniform distribution After  moding 1 and applying the floor, the resulting index sequence is less likely to be concentrated in a few positions, reducing collisions.]

### Non-integer Keys
- Formula / pseudocode:
  ```text
  [h(s)=(sigma s[i]*p^i)mod m] p = 31
  ```
- Rationale: [Simple computation using accumulation. Choosing p as a prime number makes the distribution more uniform,reducing the likelihood of collisions between different strings.]

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
| 10             | 3, 9, 6, 2, ...        | More uniform |
| 11             | 2, 9, 5, 1, ...        | More uniform             |
| 37             | 13, 27, 5, 19 , ...    | More uniform             |

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
  21      3
  22      9
  23      6
  24      2
  25      8
  26      4
  27      0
  28      7
  29      3
  30      9
  51      9
  52      5
  53      1
  54      7
  55      3
  56      0
  57      6
  58      2
  59      8
  60      4


  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      2
  22      9
  23      5
  24      1
  25      7
  26      3
  27      10
  28      6
  29      2
  30      8
  51      8
  52      4
  53      0
  54      7
  55      2
  56      9
  57      5
  58      1
  59      8
  60      3

  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      13
  22      27
  23      5
  24      19
  25      33
  26      10
  27      24
  28      1
  29      15
  30      29
  51      30
  52      7
  53      22
  54      36
  55      13
  56      27
  57      4
  58      18
  59      32
  60      9
  

  === Hash Function Observation (C++ Version) ===

  === Table Size m = 10 ===
  Key     Index
  -----------------
  21      3
  22      9
  23      6
  24      2
  25      8
  26      4
  27      0
  28      7
  29      3
  30      9
  51      9
  52      5
  53      1
  54      7
  55      3
  56      0
  57      6
  58      2
  59      8
  60      4

  

  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      2
  22      9
  23      5
  24      1
  25      7
  26      3
  27      10
  28      6
  29      2
  30      8
  51      8
  52      4
  53      0
  54      7
  55      2
  56      9
  57      5
  58      1
  59      8
  60      3

  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      13
  22      27
  23      5
  24      19
  25      33
  26      10
  27      24
  28      1
  29      15
  30      29
  51      30
  52      7
  53      22
  54      36
  55      13
  56      27
  57      4
  58      18
  59      32
  60      9

- Example output for strings:
  ```
  === String Hash (m = 10) ===
  Key     Index
  -----------------
  cat     4
  dog     8
  bat     7
  cow     3
  ant     1
  owl     6
  bee     0
  hen     5
  pig     0
  fox     1

  === String Hash (m = 11) ===
  Key     Index
  -----------------
  cat     9
  dog     6
  bat     2
  cow     7
  ant     0
  owl     1
  bee     10
  hen     7
  pig     9
  fox     1

  === String Hash (m = 37) ===
  Key     Index
  -----------------
  cat     25
  dog     16
  bat     18
  cow     8
  ant     20
  owl     18
  bee     29
  hen     8
  pig     19
  fox     22

- Observations: Choosing prime numbers for m increases dispersion and reduces collisions.
- Example output for integers:
  ```
  Hash table (m=10): [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
  Hash table (m=11): [10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
  Hash table (m=37): [20, 21, 22, 23, 24, 25, 26, 27, 28, 29, ...]
  ```
- Example output for strings:
  ```
  Hash table (m=10): ["cat", "dog", "bat", "cow", "ant", ...]
  Hash table (m=11): ["fox", "cat", "dog", "bat", "cow", ...]
  Hash table (m=37): ["bee", "hen", "pig", "fox", "cat", ...]
  ```
- Observations: Choosing prime numbers for m increases dispersion and reduces collisions.

## Analysis
- Reduce collisions: The polynomial hash can reduce collisions by using of p^i.
- Choose number: In the formula, the choice of A and P affects dispersion and collisions.
- Uniformity: The multiplication method can disperse consecutive keys, improving the uniformity of index distribution.

## Reflection
1. Designing my own hash function allows for a deeper understanding of the concepts and the ability to connect them with classroom learning.
2. By converting the formula into a program, I can quickly see the results and improve my design.
3. Observing the uniformity and collisions helps me understand the strengths and weaknesses of my own design.
4. Choosing A with more decimal places and choosing p as a prime number make the distribution more uniform,reducing the likelihood of collisions .

# Homework Assignment IV: Hash Function Design & Observation (C/C++ Version)

This assignment focuses on the design and observation of hash functions using C/C++. 
Students are expected to implement and analyze the behavior of hash functions, 
evaluate their efficiency, and understand their applications in computer science.

Developer: [yuanho-0211]  
Email: [ho950211@gmail.com]  

## Execution Environment
- Execution Environment: Linux

## My Hash Function
### Integer Keys 
- Formula / pseudocode:
  ```text
  [ formula=floor(m*(k*A mod1))  formula=(formula+1)*17 mod m  formula=(formula+1)*13 mod m  A = 0.6180339887  ]
  ```
- Rationale: [This formula is a simple computation.Choosing A with more decimal places pruduces a more uniform distribution After  moding 1 and applying the floor, the resulting index sequence is less likely to be concentrated in a few positions, reducing collisions.Adding 1 at the end, multiplying by a prime number, and performing this process twice can improve the distribution.]

### Non-integer Keys
- Formula / pseudocode:
  ```text
  [formula=(sigma(s[i]*p^i)+1)*17 mod m] p = 31
  ```
- Rationale: [Simple computation using accumulation. Choosing p as a prime number makes the distribution more uniform,reducing the likelihood of collisions between different strings.Using simple addition and multiplication by a prime number can improve the distribution.]

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
| 10             | 3, 9, 6, 2, 8, 4, 0, 7, 3, 9, 9, 5, 1, 7, 3, 0, 6, 2, 8, 4                    | More uniform |
| 11             | 2, 9, 5, 1, 7, 3, 10, 6, 2, 8, 8, 4, 0, 7, 2, 9, 5, 1, 8, 3                   | More uniform |
| 37             | 13, 27, 5, 19 , 33, 10, 24, 1, 15, 29, 30, 7, 22, 36, 13, 27, 4, 18, 32, 9    | More uniform |

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

![image](https://github.com/user-attachments/assets/daf7f0ab-37ad-4dc7-866f-46f22b91441d)

=== Table Size m = 11 ===
 
  Key     Index
  -----------------
  21      2
  22      9
  23      5
  24      1
  25      7
  26      3
  27     10
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

![image](https://github.com/user-attachments/assets/fe86e064-aa28-4aa1-a4ed-daef5d518b38)

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

   <img width="1148" height="623" alt="image" src="https://github.com/user-attachments/assets/df1eaaab-29fc-4d63-b856-f44684e7dd90" />

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

 ![image](https://github.com/user-attachments/assets/1fca7d94-e52f-4a6f-a4c4-f1a71ffcd1cf) 

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

  <img width="1033" height="612" alt="image" src="https://github.com/user-attachments/assets/ee963b23-4312-4877-886a-ba92c52af3d1" />

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

![Uploading image.png…]()

- Example output for strings:
  ```
  === String Hash (m = 10) ===
  Key     Index
  -----------------
  cat     1
  dog     5
  bat     4
  cow     0
  ant     8
  owl     3
  bee     7
  hen     2
  pig     7
  fox     8

  === String Hash (m = 11) ===
  Key     Index
  -----------------
  cat     9
  dog     8
  bat     3
  cow     1
  ant     6
  owl     10
  bee     2
  hen     1
  pig     9
  fox     10

  === String Hash (m = 37) ===
  Key     Index
  -----------------
  cat     9
  dog     3
  bat     29
  cow     10
  ant     18
  owl     29
  bee     24
  hen     10
  pig     5
  fox     7

- Observations: In a hash function, not only the table size m but also other numbers, such as adder or multipliers, affect how keys are distributed. Choosing suitable values helps spread keys evenly, reduce collisions, and improve the hash table’s efficiency.

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
- Observations: Choosing prime numbers for the table size m significantly improves the performance of hash functions because it increases the dispersion and reduces the likelihood of      collisions.By setting that m is prime, the hash function is less likely to produce repeated indices, which helps distribute keys more evenly and maintains better overall efficiency in the hash table operations.


## Analysis
- Reduce collisions:  Reduce collisions by using of p^i.
- Choose number: In the formula, the choice of A and P affects dispersion and collisions.
- Prime number:Multiplying by a prime number can improve distribution and reduce collisions.

## Reflection
1. Designing my own hash function allows for a deeper understanding of the concepts and the ability to connect them with classroom learning.
2. By converting the formula into a program, I can quickly see the results and improve my design.
3. Observing the uniformity and collisions helps me understand the strengths and weaknesses of my own design.
4. Choosing A with more decimal places and choosing p as a prime number make the distribution more uniform,reducing the likelihood of collisions .
5. I can design my own function to achieve a more uniform distribution by additionally multiplying by a prime number or using other method,such as addition, subtraction, multiplication, and division operations.

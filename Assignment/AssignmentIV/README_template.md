# Homework Assignment IV: Hash Function Design & Observation (C/C++ Version)

This assignment focuses on the design and observation of hash functions using C/C++. 
Students are expected to implement and analyze the behavior of hash functions, 
evaluate their efficiency, and understand their applications in computer science.

Developer: [yuanho-0211]  
Email: [ho950211@gmail.com]  

## Execution Environment
- Execution Environment: Windows

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
  .\Makefile.bat
  
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
  .\Makefile.bat clean
  ```

### Execution
- Run the compiled binary:
  ```bash
  ./hash_function
  ./hash_function.exe
  ```
  or
  ```bash
  ./hash_function_cpp
  ./hash_function_cpp.exe
  ```

### Result Snapshot
- Example output for integers:
  ```
  === Hash Function Observation (C Version) ===

  === Table Size m = 10 ===
  
 <img width="1210" height="714" alt="image" src="https://github.com/user-attachments/assets/16aef9fb-1d42-4f8c-8929-92928baece18" />



  === Table Size m = 11 ===
  
<img width="1194" height="614" alt="image" src="https://github.com/user-attachments/assets/f88fcd82-a1c3-4842-9b86-d5e4710c940f" />


  === Table Size m = 37 ===
  
 <img width="1209" height="620" alt="image" src="https://github.com/user-attachments/assets/57bc93bb-5a64-42a8-8d12-dff7b83c2347" />
 

  
  === Hash Function Observation (C++ Version) ===

  === Table Size m = 10 ===
  
<img width="1262" height="755" alt="image" src="https://github.com/user-attachments/assets/75b49db7-f8f5-4bcc-a21a-81d0ef49b268" />




  === Table Size m = 11 ===
  
<img width="1252" height="611" alt="image" src="https://github.com/user-attachments/assets/14a7e7a2-7243-486a-9706-0bca32ccf02d" />
  

  === Table Size m = 37 ===
  
<img width="1249" height="605" alt="image" src="https://github.com/user-attachments/assets/84f93e9a-0da5-4103-8e88-ba1d71bf2466" />




- Example output for strings:
  ```
  === String Hash (m = 10) ===

<img width="1239" height="360" alt="image" src="https://github.com/user-attachments/assets/2eb28e99-b1a0-49ac-9897-7e68159fe539" />



  === String Hash (m = 11) ===

<img width="1168" height="342" alt="image" src="https://github.com/user-attachments/assets/1586b34a-7f51-4246-ae4b-dae56f7bd3c6" />



  === String Hash (m = 37) ===

<img width="1259" height="347" alt="image" src="https://github.com/user-attachments/assets/920f8a4e-ac95-49db-8f4a-ed53f56c1767" />


  

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

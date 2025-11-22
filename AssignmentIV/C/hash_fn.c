/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h
    - 2025/11/20: Modify two hash function

   Developer: yuanho-0211 <ho950211@gmail.com>
 */

#include "hash_fn.h"

int myHashInt(int key, int m) {
    if (m == 0) {
        return -1; //zero table size
    }
    double A = 0.61803398875;
    double formula = (key * A) - (int)(key * A); //mod 1
    int formula_all = m*formula; // floor 
    formula_all = (formula_all * 7 +key*3) % m;
    return formula_all; 
}

int myHashString(const char* str, int m) {
    if (m == 0) {
        return -1; //zero table size
    }
    if (str == NULL || str[0] == '\0') {
        // empty strings
        return 0;
    }
    unsigned long hash = 0;
    unsigned long p = 31;
    unsigned long pi = 1; // p^i,p^0 = 1
    for (int i = 0; str[i] != '\0'; i++) {
        hash = (hash + (unsigned char)(str[i]) * pi);
        pi = (pi * p)  ; // next p^i
    }
    int hash_new = (hash * 7 ) % m;
    return hash_new ; // string hashing 
}

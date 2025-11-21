/*
   ========================================
   hash_fn.h — declare your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/17: Initial implementation
    - 2025/11/21: Add brief description 

   Developer: yuanho-0211 <ho950211@gmail.com>
 */
#ifndef HASH_FN_H
#define HASH_FN_H

#include <stdio.h>
#include <string.h>

/**
 * @brief Computes the hash index for a string key.
 * @param key The string key to hash.
 * @param m The table size.
 * @return The computed hash index.
 */
int myHashString(const char* str, int m);

/**
 * @brief Computes the hash index for an integer key.
 * @param key The integer key to hash.
 * @param m The table size.
 * @return The computed hash index.
 */
int myHashInt(int key, int m);

#endif

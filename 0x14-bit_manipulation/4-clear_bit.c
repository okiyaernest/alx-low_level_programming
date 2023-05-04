#include <stdio.h>
#include "main.h"

/**
 * clear_bit - A function that sets a bit to 0 at given index
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;  // index out of range
    }
    *n &= ~(1UL << index);  // clear the bit at the given index
    return 1;  // success
}

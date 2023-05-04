#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: pointer to the unsigned long int number
 * @index: index of the bit to be cleared
 *
 * This function takes a pointer to an unsigned long int number and clears the bit
 * at the given index, by setting it to 0. The index starts from 0.
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);
    *n &= ~(1UL << index);
    return (1);
}

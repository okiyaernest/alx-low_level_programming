#include <stdio.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

/**

infinite_add - Adds two numbers.

@n1: Pointer to first number string

@n2: Pointer to second number string

@r: Pointer to buffer to store result

@size_r: Size of buffer to store result

Return: Pointer to the result or 0 if the result can not be stored in r.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int len = MAX(len1, len2);
    int carry = 0;
    int sum = 0;
    
    if (len + 1 > size_r) {
        return 0;
    }
    
    r[len + 1] = '\0';
    while (len1 > 0 || len2 > 0 || carry > 0) {
        if (len1 > 0) {
            sum += n1[--len1] - '0';
        }
        if (len2 > 0) {
            sum += n2[--len2] - '0';
        }
        sum += carry;
        r[len--] = sum % 10 + '0';
        carry = sum / 10;
        sum = 0;
    }
    
    if (len + 1 > size_r) {
        return 0;
    }
    
    if (r[0] == '0') {
        return &r[1];
    } else {
        return r;
    }
}

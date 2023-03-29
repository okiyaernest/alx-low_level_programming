#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
    int i, j;
    char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; alpha[j] != '\0'; j++)
        {
            if (s[i] == alpha[j])
            {
                s[i] = rot13[j];
                break;
            }
        }
    }

    return s;
}

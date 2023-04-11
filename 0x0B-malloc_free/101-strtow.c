#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, n;

    /* return NULL on invalid input */
    if (str == NULL || *str == '\0')
        return (NULL);

    /* allocate memory for the words array */
    words = malloc(sizeof(char *));
    if (words == NULL)
        return (NULL);

    n = 0; /* count of words */
    i = 0; /* current word start index */
    j = 0; /* current word length */

    /* split string into words */
    while (str[i] != '\0')
    {
        /* skip leading spaces */
        while (str[i] == ' ')
            i++;

        /* break if end of string reached */
        if (str[i] == '\0')
            break;

        /* allocate memory for the current word */
        words = realloc(words, (n + 1) * sizeof(char *));
        if (words == NULL)
            return (NULL);

        j = 0; /* reset current word length */

        /* copy characters into current word */
        while (str[i + j] != ' ' && str[i + j] != '\0')
            j++;

        words[n] = malloc((j + 1) * sizeof(char));
        if (words[n] == NULL)
        {
            /* free memory for previous words on failure */
            for (k = 0; k < n; k++)
                free(words[k]);
            free(words);
            return (NULL);
        }

        memcpy(words[n], &str[i], j);
        words[n][j] = '\0';

        n++; /* increment count of words */
        i += j; /* advance to next word start index */
    }

    /* allocate memory for the NULL terminator */
    words = realloc(words, (n + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    words[n] = NULL; /* add NULL terminator */

    return (words);
}

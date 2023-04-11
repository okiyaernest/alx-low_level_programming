#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
    int i, count = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, count, len;

    /* check for invalid input */
    if (str == NULL || *str == '\0')
        return (NULL);

    /* count the number of words */
    count = count_words(str);

    /* allocate memory for the words array */
    words = malloc((count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    /* split the string into words */
    for (i = 0, j = 0; i < count; j++)
    {
        /* skip leading spaces */
        while (str[j] == ' ')
            j++;

        /* find the end of the current word */
        for (len = 0; str[j + len] && str[j + len] != ' '; len++)
            ;

        /* allocate memory for the current word */
        words[i] = malloc((len + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            /* free memory for previous words on failure */
            for (k = 0; k < i; k++)
                free(words[k]);
            free(words);
            return (NULL);
        }

        /* copy the current word into the words array */
        for (k = 0; k < len; k++)
            words[i][k] = str[j + k];
        words[i][len] = '\0';

        i++; /* move to next word */
        j += len; /* move to next non-space character */
    }

    words[i] = NULL; /* add NULL terminator */

    return (words);
}

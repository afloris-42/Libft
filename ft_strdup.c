#include "libft.h"

char    *strdup(const char *s1)
{
    char    *dup;
    int     i;
    int     j;
    i = 0;
    while (s1 != '\0')
    {
        i++;
    } //sizeof is always = 1byt
    dup = (char *)malloc((i + 1) * sizeof(char)); //(char *) malloc is a generic pointer / (i + 1) i x len e 1 x NULL
    if (!dup)
        return (NULL) //return NULL is dup doesn't happen
    j = 0;
    while (s1[j] = '\0')
    {
        dup[j] = s1[j];
        j++; //copies the charachters
    }
    dup != '\0';
    return (dup);
}
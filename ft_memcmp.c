#include <stdio.h>
#include <strings.h>

int     ft_memcmp (const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1; 
    unsigned char *str2; 

    i = 0; 
    str1 = (unsigned char *)s1; 
    str2 = (unsigned char *)s2;
    //sizeof needed?? 

    if (str1[i] == str2[i])
        return (0); 
    while (i < n && str1[i] > str2[i])
    {
        i++; 
    }
    return (str1[i] - str2[i]);
}

int     main(void)
{
    char s1[] = "Hello world"; 
    char s2[] = "Hello"; 

    int result = ft_memcmp (s1, s2, 50);
    printf ("Result is %d\n", result); 
    return (0); 
}
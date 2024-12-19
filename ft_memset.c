void* ft_memset(void *b, int c, size_t len)
 {
    unsigned char*   temp;

    temp = (unsigned char*)b;
    while (len > 0) //len is always > 0
    {
        *(temp ++) = (unsigned char)c;
        len--; 
    }
    return (b);
 }
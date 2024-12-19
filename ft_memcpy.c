void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
 {
    unsigned char* tmp_dst;
    unsigned char* tmp_src; 

    if (dst == NULL && src == NULL)
        return (NULL);

    tmp_dst = (unsigned char *)dst; 
    tmp_src = (unsigned char *)src;

    while (n > 0)
    {
        *(tmp_dst++) = *(tmp_src++);
        n--;
    }
    return (dst);
 }
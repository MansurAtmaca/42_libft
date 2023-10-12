#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)

{
    size_t i;
    size_t dst_len;
    size_t src_len;


    i = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if(dst_len >= dstsize)
    {
        return(dstsize + src_len);
    }
    while(i < dstsize - 1 && src[i] != '\0')
    {
        dst[dst_len ++] = src[i++];
    
    }
    dst[dst_len] = '\0';
    return(dst_len);
}


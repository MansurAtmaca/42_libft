#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
   
    unsigned char *source;
    unsigned char *destination;

    destination = (unsigned char *)dst;
    source = (unsigned char *)src;
    if (source == destination)
        return (destination);
    else if(destination > source)
    {
        while(len --)
           *(destination + len) = *(source + len);
    }
    else
        ft_memcpy(destination, source, len);
    
    return (destination);
}


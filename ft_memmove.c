#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    char *source;
    char *destination;
    

    i = 0;
    destination = (char *)dst;
    source = (char *)src;
    if (source == destination)
    {
        return (dst);
    }
    else if(destination > source)
    {
        while(len --)
        {
           *(destination + len) = *(source + len);
        }
        return (dst);
    }
    while (i < len)
    {
        *(destination + i)= *(source + i);
        i ++;
    }
    return (dst);
    

}
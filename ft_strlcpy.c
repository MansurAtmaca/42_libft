#include <stdlib.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t a;

    i = 0;
    a = 0;
    while(src[a])
    {
        a ++;
    }
    if(!src)
    return (0);
    while(src[i] != '\0' && i < size)
    {
        dest[i] = src [i];
        i ++;
    }
    if(size < a){
        dest[size - 1] = '\0';
    }

   if (size != 0)
    {
        dest[i] = '\0';
    }
   
    
    
    return(a);

}

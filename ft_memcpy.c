#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *source;
	char *destination;
	
	i = 0;
	source = (char *)src;
	destination = (char *)dest;
	if(!destination && !source)
	return(0); 
	while (i < n)
	{
		
		*(destination + i) = *(char *)(src + i);
		i++;
	}
	return (dest);

	
	 
}

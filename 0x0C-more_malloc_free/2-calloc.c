#include "main.h"


void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	if(nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	void *ptr = malloc(nmemb * size);
	if(ptr == NULL)
	{
		return (NULL);
	}
	chat *p = ptr;
	for(i= 0; i < nmemb * size; i++)
	{
		*(p + 1) = 0;
	}
	return (ptr);
}

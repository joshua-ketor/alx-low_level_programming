#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory bloc using malloc and free
 * @ptr: pointer to the memory previously allowed with a call to malloc
 * @old_size: size in bytes of the allocated space for `ptr`
 * @new_size: size in bytes of the allocated space in the range
 * from the start of `ptr` up to the minimum of the old and new sizes
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	if (new_size > old_size)
		memcpy(nptr, ptr, old_size);
	else
		memcpy(nptr, ptr, new_size);

	free(ptr);

	return (nptr);
}

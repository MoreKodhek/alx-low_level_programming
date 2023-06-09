#include "hash_tables.h"

/**
 * hash_djb2 - implementation
 * @str: a string for the hash value
 *
 * @Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int j;

	while ((j = *str++))
	{
		hash = ((hash << 5) + hash) + j;
	}

	return (hash);
}

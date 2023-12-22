#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: key to get the index of
 * @size: size of array of hash table
 * Return: index of key
 * Description: followes djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

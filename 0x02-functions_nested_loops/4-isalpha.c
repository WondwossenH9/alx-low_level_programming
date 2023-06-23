#include "main.h"
/**
 * _isalpha - checks alphabet characters
 * @c: is the character to be checked
 * Return: 1 if c is a alphabet and 0 if it is not
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A'&& c <= 'Z'));
}

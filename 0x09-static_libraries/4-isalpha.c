#include "main.h"
/**
 * _isalpha - checks alphabet character
 * @c: the character to check
 * Return: 1 if c is a letter else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

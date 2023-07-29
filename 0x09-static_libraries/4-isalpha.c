#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: chara to check
 * Return: 1 if c is an alphabet, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

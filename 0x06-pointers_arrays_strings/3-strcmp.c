#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: an int <, =, > if s1 is <, =, or > s2, resp.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 < *s2)
	{
		return (-15);
	}
	else if (*s1 > *s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
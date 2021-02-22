#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *@s - string to be checked for character
 *@c - character being checked.
 * Return: Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	
}

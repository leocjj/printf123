#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * concat - Function that concatenate two strings.
 * @s1: string to which it should be added.
 * @s2: String to be add.
 * @chars_printed: chars printed.
 *
 * Return: number of character added.
 */
int count_esp(char *string)
{
	int i = 0;

	while (string != '\0')
	{
		if (strings[i] >= 0 && strings[i] < 32)
			i++
	}

	return (i);
}





/**
 * concat - Function that concatenate two strings.
 * @s1: string to which it should be added.
 * @s2: String to be add.
 * @chars_printed: chars printed.
 *
 * Return: number of character added.
 */
int concat(char *s1, char *s2, int *chars_printed)
{
	int size_of_s1 = 0, size_of_s2 = 0, j = 0;
	char *n = "(null)", *temp, *memory;

	if (s1 == NULL)
	{
		return (0);
	}
	else
		while (s1[size_of_s1] != '\0')
			size_of_s1++;

	if (s2 == NULL)
	{
		s2 = n;
		size_of_s2 = 6;
	}
	else
		while (s2[size_of_s2] != '\0')
			size_of_s2++;
	i = cont_esp(char *string);
	memory = malloc(sizeoff(char) * size_of_s2 + (i * 3));

	while (string[i] != '\0')
        {
                if (string[i] >= 32 && string[i] <= 127)
		{
			convert_x(char *string);
		}
                i++;
        }

	if (size_of_s1 + size_of_s2 + 1 > buffer_size)
	{
		temp = concat_s(s1, s2);
		*chars_printed += write(1, temp, size_of_s1 + size_of_s2);
		free(temp);
		free_temp(s1);
		size_of_s1 = 0;
	}
	else
	{
		for (j = 0; j < size_of_s2; j++)
			s1[size_of_s1 + j] = s2[j];
		s1[size_of_s1 + size_of_s2 + 1] = '\0';
	}

	return (size_of_s2);
}

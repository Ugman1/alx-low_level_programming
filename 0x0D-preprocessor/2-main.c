#include <stdio.h>

#define MY_FILE __FILE__

/**
 * main - print the name of the source file
 * Return: always 0
 */

int main(void)
	{
		printf("%s", __FILE__);
		return (0);
	}

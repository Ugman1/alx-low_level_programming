#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * by Ugochukwu Nwaorgu
 *
 * @name: recieved arguememt
 * @f: name of function to be called back
 * Return: void
 */

void print_name(char *name, void (*f)(*char));
{
	if (name != NULL && f != NULL)
		f(name);
}

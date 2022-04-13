#include "function_pointers.h"

/**
* print_name - print name
* @name: name to print
* @f: function to print name
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

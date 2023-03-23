#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the 
 *	operation asked by the user
 * @s : pointer to operator input
 *
 * Return: pointer to function with matching operator
 */
int (*get_op_func(char *s))(int, int)
{
	int x = 0;

	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[x].op != NULL)
	{
		if (*(ops[x].op) == *s)
			return (ops[x].f);
		x++;
	}

	return (NULL);
}

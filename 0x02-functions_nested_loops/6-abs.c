#include "main.h"
/**
 * _abs - computes the absloulte value
 * @i: value to test
 *
 * Return: absoulute value of i
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}

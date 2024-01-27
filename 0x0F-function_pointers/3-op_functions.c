#include "3-calc.h"

/**
 * op_add - calculate the sum of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: sum
 */
int op_add(int a, int b);
{
	return (a + b);
}

/**
 * op_sub - calculate the difference of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the result of the division of a by b
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of the division of a by b
 * @a: first operand
 * @b: second operand
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

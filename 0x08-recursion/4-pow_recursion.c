/**
 * _pow_recursion - a function that returns x to the power of y
 *
 * @x: the integer
 *
 * @y: the second integer
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x);

	return (x * _pow_recursion(y - 1));
}

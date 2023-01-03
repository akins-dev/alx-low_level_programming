/**
 * _memcpy: copies n bytes from memory
 * 	area src to memory area dest
 *
 * @dest: destination (memory address to
 * 	which n bytes from src will be copied
 *
 * @src: source (memory area from which n
 * 	bytes of data will be copied
 *
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	
	return (dest);
}

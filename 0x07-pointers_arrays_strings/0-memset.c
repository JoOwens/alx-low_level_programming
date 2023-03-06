/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the start of the memory block to be filled
 * @b: the byte value to be used for filling
 * @n: the size of the memory block in bytes
 *
 * Return: pointer to the start of the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s; /* pointer to start of memory block */

	/* iterate over each byte in memory block and set it to byte value */
	while (n--)
	{
		*p++ = b;
	}

	return (s); /* return pointer to start of memory block */
}


#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	
	printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizef(lli));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

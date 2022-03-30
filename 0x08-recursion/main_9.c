#include <stdio.h>

int wildcmp(char *, char *);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = wildcmp("school-school.c", "sch*ool.c");
	printf("%d\n", r);
	return (0);
}

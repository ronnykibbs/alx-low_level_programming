#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)

{

	int a;
	char b;
	float c;


	printf("Size of a int: %lu byte(s)\n", (sizeof(a)));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)(sizeof(a)));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)(sizeof(a)));
	char name[] = "ALX School";
	puts("\"My name is Wesley");
	puchar(name[0]);
	puchar('\n);
	return (0);

}

#include <stdio.h>

/**
 * add - adds two numbers 
 * Return: the number
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * main - Check the code
 * Return: Always 0
 */

int main()
{
	int x = 10;
	int y = 25;
	int sum;

	sum = add(x, y);

	printf("%d\n", sum);
	return (0);
}

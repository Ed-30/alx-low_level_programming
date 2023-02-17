#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: o when successful
 */

int main(void)
{
	printf("size of a char:%lu byte(s)", sizeof(char));
	printf("size of an int:%lu bytes(s)", sizeof(int));
	printf("size of a long int:%lu bytes(s)", sizeof(long int));
	printf("size of a long long int:%lu bytes(s)", sizeof(long long int));
	printf("size of a float:%lu bytes(s)", sizeof(float));
	return (0);
}

#include <stdio.h>
/**
* main - program starts here
*
* Return: o on success
*/
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of float: %d byte(s)\n", sizeof(float));

	return (0);
}

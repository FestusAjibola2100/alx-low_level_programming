#include <stdio.h>

/** main-is the entry point for the program
 *
 * Return: zero if no error, non-zero value if errors
 */


int main(void)
{
	printf("size of a char: %ld byte(s)\n", 
			sizeof(char));
	printf("size of a long long int: %ld byte(s)\n", 
			sizeof(long long int));
	printf("size of float: %ld byte(s)\n",
			sizeof(float));
	return (0);
}

#include<stdio.h>

/**
 * main - Printing of sizes
 *
 * Return: 0
 */
int main(void)
{
	printf("size of char is=%i byte\n",sizeof(char));
	printf("size of signed char is=%i byte\n",sizeof(signed char));
	printf("size of unsigned char is=%i byte\n\n\n",sizeof(unsigned char));

	printf("size of int is=%i bytes\n",sizeof(int));
	printf("size of signed int is=%i bytes\n",sizeof(signed int));
	printf("size of unsigneed int is %i bytes\n\n\n",sizeof(unsigned int));

	printf("size of short int is=%i bytes\n",sizeof(short int))
	printf("size of signed short int is=%i bytes\n",sizeof(signed short int));
	printf("size of unsigned short int is=%i bytes\n\n\n",sizeof(unsigned int));

	printf("size of long int is=%i bytes\n",sizeof(long int));
	printf("size of signed long int is=%i bytes\n",sizeof(signed long int));
	printf("size of unsigned long int is=%i bytes\n\n\n",sizeof(unsigned long int));

	printf("size of float is=%i bytes\n",sizeof(float));
	printf("size of double is=%i bytes\n",sizeof(double));
	printf("size of long double is=%i bytes\n",sizeof(long double));
	return (0);
}

#include <stdio.h>

/**
*main - print the string in the put function
*
*Description: using the main function
*this program prints "Programming is like building  a multilingual puzzle
*Return: 0
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

printf("Size of a char: %ld 1 byte(s)\n", sizeof(c));
printf("Size of an int: %ld 4 byte(s)\n", sizeof(i));
printf("Size of a long int: %ld 4 byte(s)\n", sizeof(li));
printf("Size of a long long int: %ld 8 byte(s)\n", sizeof(lli));
printf("Size of a float: %ld 4 byte(s)\n", sizeof(f));
return (0);
}

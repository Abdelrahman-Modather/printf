#include <limits.h>
#include <stdio.h>
#include "main.h"
#define ZERO 0

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len);
	len = printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len);
	len = _printf("empty Character:[%c]\n", ' ');
	printf("%d\n", len);
	len = printf("empty Character:[%c]\n", ' ');
	len = _printf("Character:[%c]\n", 'H');
	printf("%d\n", len);
	len = printf("Character:[%c]\n", 'H');
	len = _printf("Character:[%c%c]\n", 'H', 'I');
	printf("%d\n", len);
	len = printf("Character:[%c%c]\n", 'H', 'I');
	len = _printf("Character:[%c%c%c]\n", 'H', 'I', '!');
	printf("%d\n", len);
	len = printf("Character:[%c%c%c]\n", 'H', 'I', '!');

	len = _printf("Character:[%c %c %c]\n", 'H', 'I', '!');
	printf("%d\n", len);
	len = printf("Character:[%c %c %c]\n", 'H', 'I', '!');
	len = _printf("Two c with Space:[%c %c]\n", 'H', 'I');
	printf("%d\n", len);
	len = printf("Two c with Space:[%c %c]\n", 'H', 'I');
	len = _printf("empty String:[%s]\n", "");
	printf("%d\n", len);
	len = printf("empty String:[%s]\n", "");
	len = _printf("Space String:[%s]\n", " ");
	printf("%d\n", len);
	len = printf("Space String:[%s]\n", " ");
	len = _printf("String:[%s]\n", "I am a string !");
	printf("%d\n", len);
	len = printf("String:[%s]\n", "I am a string !");
	len = _printf("String:[%s%s]\n", "I am a string !", "second string !");

len = _printf("String:[%s%s]\n", "I am a string !", "second string !");
printf("%d\n", len);
len = printf("String:[%s %s]\n", "I am a string !", "second string !");
return (0);
}

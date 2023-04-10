#include "main.h"
#include <stdio.h>

/**
  * main - Entry point. It prints the number of args
  * @argc: keeps count of the number of arguments passed
  * @argv: is an array containing the arguments
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
  * main - Entry point. It Prints all the args content
  * @argc: argument count. Keeps count of the arguments provided
  * @argv: argument vector. Keeps record of arguments provided
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}


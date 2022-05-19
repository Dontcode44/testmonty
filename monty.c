#include "monty.h"

/**
 * main - Main of the project
 * @argc:
 * @argv:
 *
 */
int main(int argc, char *argv[])
{
	char *buffer;
	char *tkn;

	fileopen = fopen(argv[1], "r");

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (!fileopen)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (fileopen)
}
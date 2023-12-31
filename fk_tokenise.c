#include <stdio.h>
#include <string.h>

/**
 * Description:
 * demonstrates how to break down a string into tokens using strtok function
 * main - entry point
 * Return: Always 0 (Success)
 */

void fk_print(const char *message);
int token_str()
{
	char command[] = "this.is.our.shell";
	char *tokens;
	char *delimiter = ".";
	tokens = strtok(command, delimiter);
	while (tokens != NULL)
	{
		fk_print("Token: %s\n");
		tokens = strtok(NULL, delimiter);
	}
	return (0);
}

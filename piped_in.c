#include "holberton.h"

int piped_in(char *lines[], char *buffer)
{
	int flag, j;
	size_t size = 1024;

	read(STDIN_FILENO, buffer, size);
	j = 0;
	flag = 0;
	lines[j] = strtok(buffer, "\n");
	/*delimiter by line */
	while (lines[j])
	{
		printf("%s\n", lines[j]);
		j++;
		lines[j] = strtok(NULL, "\n");
	}

	return (flag);
}

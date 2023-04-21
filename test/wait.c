#include "main.h"

/**
 * main - fork and wait example
 *
 * Return: 0
 */
int main(void)
{
	pid_t pid;

	if (pid = fork() == -1)
		dprintf(STDERR_FILENO, "Error in fork\n");
	else if (pid == 0)
		printf("Child process here\n");
	else {
		wait(NULL);
		printf("Parent process here\n");
	}
	printf("Ending a process\n");
}

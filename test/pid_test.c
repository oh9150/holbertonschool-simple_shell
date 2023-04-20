#include "main.h"

/**
 * main - prints the current pid and ppid
 *
 * Return: 0
 */
int main(void)
{
	pid_t pid, ppid;

	pid = getpid();
	ppid = getppid();
	printf("pid: %u\nppid: %u\n", pid, ppid);

	return (0);
}

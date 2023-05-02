#include "sys/wait.h"
#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

int main(void)
{
	pid_t pid;

	printf("Starting main\n");

	pid = fork();
	wait(NULL);

	if (pid == 0)
		printf("Child: Finishing main\n");
	else
		printf("Parent: Finishing main\n");

	return (0);
}

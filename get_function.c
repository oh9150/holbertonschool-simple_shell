#include "main.h"

/**
 * call_function - executes the command
 *
 * Return: void
 */
void call_function(char *path)
{
	pid_t pid = fork();
	if (pid == -1)
		return;
	if (pid == 0)
		execve();
}

/**
 * get_function - finds the path of given command
 *
 */
void get_function(char *name)
{


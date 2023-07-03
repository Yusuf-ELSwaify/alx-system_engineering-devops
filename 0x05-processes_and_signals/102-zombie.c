#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

/**
 * infinite_while - a function that runs forever and returns nothing
 * Return: 0
*/
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Creates 5 zombie processes.
 *
 * Return: 0
 */
int main(void)
{
	char count = 0;
	pid_t pid;

	while (count < 5)
	{
		pid = fork();
		if (pid == 0)
			exit(0);
		printf("Zombie process created, PID: %d\n", pid);
		sleep(1);
		count++;
	}

	infinite_while();

	return (0);
}

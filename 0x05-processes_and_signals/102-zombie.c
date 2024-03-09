#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - function that keeps program running
 * Return: 0 if success
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
 * main - creates 5 zombie processes
 * Return: 0 if success
*/

int main(void)
{
	int z, pid;

	for (z = 0; z < 5; z++)
	{
		pid = fork();
		if (pid > 0)
			printf("Zombie process created, PID: %d\n", pid);
		else
			return (0);
	}
	infinite_while();
	return (0);
}
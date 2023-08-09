#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid; /* Proccess Identification */
	pid_t ppid; /* Parent process Identification */

	pid = getpid();
	ppid = getppid();

	printf("%d\n", pid); /*The ID in this changes when the program is re_run each time */
	printf("%d\n", ppid); /*The ID in this is constant as the program is the parent program */

	return (0);
}

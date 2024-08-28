New! Keyboard shortcuts … Drive keyboard shortcuts have been updated to give you first-letters navigation
#include "shell.h"

/**
 * get_sigint - 
 * @sig: 
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}

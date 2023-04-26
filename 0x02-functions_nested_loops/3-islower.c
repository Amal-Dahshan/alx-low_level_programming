#include "main.h"

/**
* * main - check the code
* print 1 if c is lowercase, or 0 if not
* return - zero 
* */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);	
}

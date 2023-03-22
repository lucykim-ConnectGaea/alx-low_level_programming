#include"main.h"
#include <ctype.h>

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (islower(c))
	{
		return (1);
	}
	else if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

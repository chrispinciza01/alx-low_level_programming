#include "main.h"

/**
 * _isalph - chechs for alphabetic character
 * @c:the character to be checked
 *
 * return: for alphabetic character
 */
int _isalpha(int c)
{


	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

	{
		return (1);
	}

	return (0);
}

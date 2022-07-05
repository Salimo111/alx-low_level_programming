#include "main.h"



/**

 * _islower - Check main

 * @c - An input character

 * Description: Function that checks for lowercase letter

 * Return: 1 is c is lower case or 0 if c is uppercase

 */

int _islower(int c)

{

	char i;

	int lower = 0;



	for (i = 'a'; i <= 'z'; i++)

	{

		if (i == c)

			lower = 1;

	}



	return (lower);

}

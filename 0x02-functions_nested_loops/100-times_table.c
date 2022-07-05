#include "main.h"



/**

 * print_times_table - Check main

 * @n: An integer

 * Description: Prints times table of n

 * Return: 0 if n is greater than 15 or less than 0

 */

void print_times_table(int n)

{

	int i, j;



	if (n > 0 && n < 15)

	{

		for (i = 0; i <= n; i++)

		{

			_putchar('0');

			for (j = 1; j <= n; j++)

				putformat(i * j);

			_putchar('\n');

		}

	}

}

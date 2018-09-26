#include "holberton.h"

/**
 * jack_bauer - prints the minutes of a 24 hour clock
 **/

void jack_bauer(void)
{
	int hour;
	int minute;
	char colon;
	char n;

	hour = 0;
	colon = ':';
	n = '\n';


	while (hour <= 23)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(colon);
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar(n);
			minute = minute + 1;
		}
		hour = hour + 1;
	}
}

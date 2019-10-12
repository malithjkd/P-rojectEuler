/*
*	gcc 2.c
*	malithjkd
*	11.10.2019
*/

#include <stdio.h>

int previous = 1;
int now = 2;
int next = 0;
int total = 0;

int main ()
{
	do
	{
		if(now%2 == 0)
		{
			total = total + now;
		}
		next = previous + now;
		previous = now;
		now = next;
	}while(now < 4000000);

	printf("answer %d\n",total);
}

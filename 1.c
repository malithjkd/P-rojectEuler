/*
* malithjkd
* 11.10.2019
*/

#include<stdio.h>

void main()
{
	int answer = 0;
	for(int i = 0;i<1000;i++)
	{
		if(i%3 == 0)
		{
			//printf("%d\n",i);
			answer = answer + i;
		}
		else if(i%5 == 0)
		{
			//printf("%d\n",i);
			answer = answer + i;
		}
	}
	printf("answer %d\n",answer);
}

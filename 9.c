#include<stdio.h>
#include<math.h>
int a;
int b;
float c;
float sum;

int main()
{
	
	for(a=1;a<=500;a++)
	{
		for(b=a;b<1000;b++)
		{
			c = sqrt(a*a+b*b);
			sum = a+b+c;
			if (sum == 1000.00)
			{
				printf("%i,%i,%f\n",a,b,c);
				break;
			}

		}

	}



	return 0;
}

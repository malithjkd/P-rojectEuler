/*
*	gcc 3.c -lm && ./a.out
*	malithjkd
*	12.10.2019
*/

#include <stdio.h>
#include <math.h>

#define ref_val 600851475143
//#define ref_val 13195
int count = 0; 
int if_prime(int);

int main ()
{
	float ref_val_sqrt = sqrt(ref_val);
	//printf("%f\n",ref_val_sqrt);
	int max_prime_factor = 0;

	
	for(int x = 3; x <= ref_val_sqrt + 1 ; x = x+2)
	{
		if (if_prime(x) == 1)
		{
			if(ref_val%x == 0)
			{
				max_prime_factor = x;
			}
		}
	}
	
	printf("answer %d \n",max_prime_factor);
	printf("count = %d\n",count);	
	return 0;
}


int if_prime(int val)
{
	float sqrt_val = sqrt(val);
	int flag = 0;	
	
	
	for(int i=3; i <= sqrt_val +1; i= i+2 )
	{
		
		count++;
		if(val%i == 0)
		{
			flag = 1;
		}
	}
	if(flag == 0)
	{
		return 1;
	}else
	{
		return 0;
	}
		
}


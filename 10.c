#include <stdio.h>
#include <math.h>

long int i =  3;
int j = 0;
double next_val = 0;
int primeNos [150000];
long int primeNo = 0;
float sqrootInNO =0.0;
long int reminder = 0.0;
int notPrimeFlag = 0;
long long int primeSum = 2;


int nextPrimeNo(long int inputNo)
{
	sqrootInNO = sqrt(inputNo);
   	reminder = 0;
   	notPrimeFlag = 0;
   	
	for(j=1;j<=primeNo;j++)
   	{
		if(primeNos [j-1] < sqrootInNO)
		{
			reminder = inputNo % primeNos [j];
       		if (reminder == 0)
       		{
				notPrimeFlag++;    
       		}
		}
	}
	if(notPrimeFlag == 0)		// input not de
	{
		primeNo++;
		primeNos [primeNo] = inputNo;
		return 1;	
	}else
	{
		return 0;
	}
}

int main()
{
	primeNos[0] = 0;
	primeNos[1] = 2;
	primeNo = 1;
	for(i=3;i<2000000;i=i+2)
	{
		if(nextPrimeNo(i)==1)
		{
			primeSum = primeSum + i;
		}
	}
    printf("primeNo count = %ld\tprime sum = %lld\n",primeNo,primeSum);
	return 0;
}

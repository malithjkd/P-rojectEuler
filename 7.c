#include <stdio.h>
#include <math.h>

double i =  3;
int j = 0;
double next_val = 0;
int primeNos [10005];
int primeNo = 0;
float sqrootInNO =0.0;
int reminder = 0.0;
int notPrimeFlag = 0;


int nextPrimeNo(int inputNo)
{
   sqrootInNO = sqrt(inputNo);
   reminder = 0;
   notPrimeFlag = 0;
   for(j=1;j<=primeNo;j++)
   {
       reminder = inputNo % primeNos [j];
       if (reminder == 0)
       {
           notPrimeFlag++;
           //printf("%i,%i\n",inputNo,notPrimeFlag);
           
       }
   } //end of for loop
   
   if(notPrimeFlag > 0)
   {
       //printf("%i is not a prime no\n",inputNo);
   }else if(notPrimeFlag == 0)
   {
       primeNo++;
       primeNos [primeNo] = inputNo;
       
   }
   
   return 0;
   
}

int main()
{
   primeNos[0] = 0;
   primeNos[1] = 2;
   primeNo = 1;
   while (1)
   {
       if(primeNo < 10001)
       {
           nextPrimeNo(i);
           i++;
       }
       else
       {break;}
   }
    printf("%i prime no is = %f \n",primeNo,i-1);
   return 0;
}

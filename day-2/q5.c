#include<stdio.h>
#include<stdlib.h>
int main()
{
   int N,i,a,sum=0,K;
   printf("Enter the number");
   scanf("%d",& N);
   K=N;
   N=abs(K);  //For negative Values
     while(N!=0)
     {
      a=N%10;
      sum+=a;
      N=N/10;
     }
printf("The sum of digits in %d is = %d",K,sum);
return 0;
}
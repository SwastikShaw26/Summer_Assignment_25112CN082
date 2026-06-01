#include<stdio.h>
int main()
{
   int N,i,a,count=0,K;
   printf("Enter the number");
   scanf("%d",& N);
   K=N;
   if(N==0)
   {
    printf("The no, of digit in 0 is 1");
   }
   else
   {
     while(N!=0)
     {
      a=N%10;
      count++;
      N=N/10;
     }
   }
printf("The number of digits in %d is = %d",K,count);
return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int N,i,a,product=1,K;
   printf("Enter the number");
   scanf("%d",& N);
   K=N;
   N=abs(K);  //For negative Values
   if(N==0)
   {
     printf("The product of 0 is 0");
   }
   else
   {
        while(N!=0)
        {
         a=N%10;
         product*=a;
         N=N/10;
        }
       printf("The product of digits in %d is = %d",K,product);
    }
return 0;
}
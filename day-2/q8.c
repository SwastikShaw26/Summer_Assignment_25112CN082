#include<stdio.h>
int main()
{
   int N,i,a,rev=0,K;
   printf("Enter the number");
   scanf("%d",& N);
   K=N;
     while(N!=0)
     {
      a=N%10;
      rev=rev*10+a;
      N=N/10;
     }
     if(K==rev)
     {
        printf("The number is palindrome");
     }
     else{
        printf("The number is not palindrome");
     }
}
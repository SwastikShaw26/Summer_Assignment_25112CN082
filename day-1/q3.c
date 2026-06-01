#include<stdio.h>
int main()
{
    int N,i,fact=1;
    printf("Enter a number");
    scanf("%d",& N);
    printf("The Factorial of %d is\n",N);
    if (N < 0)
    {
       printf("Error: Factorial of a negative number does not exist.\n");
    } 
    else
    {
      for(i=1;i<=N;i++)
      {
        fact=fact*i;
      }
      printf("%d",fact);
    }
      return 0;
}
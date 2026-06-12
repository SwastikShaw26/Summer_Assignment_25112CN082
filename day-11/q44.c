#include <stdio.h>
int factorial(int a)
{
    int i,fact=1;
   if (a < 0)
    {
       printf("Error: Factorial of a negative number does not exist.\n");
    } 
    else
    {
      for(i=1;i<=a;i++)
      {
        fact=fact*i;
      }
      printf("%d",fact);
    }
}
int main()
{
    int n1,result;
    printf("Enter the number: ");
    scanf("%d",&n1);
    factorial(n1);
    return 0;
}
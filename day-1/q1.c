#include<stdio.h>
int main()
{
    int N,sum=0,i;
    printf("Enter a natural no.");
    scanf("%d",& N);
    if (N <= 0) 
    {
        printf("Please enter a natural number greater than 0.\n");
    }
    else
    {
        for (i = 1; i <= N; i++) 
        {
        sum += i;
        }
         printf("The sum of the first %d natural numbers is: %d\n", N, sum);
    }
    return 0;
}

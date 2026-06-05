#include<stdio.h>
int main()
{
    int N,i=0,a,sum=0;
    printf("Enter the positive number to be checked\n");
    scanf("%d", &N);
    for(i=1;i<N;i++)
    {
        a=N%i;
     if(a==0)
     {
        sum+=i;
     }
    }
    if(sum==N)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
    return 0;
}
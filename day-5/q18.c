#include<stdio.h>
int main()
{
    int N,i,k,a,fact=1,sum=0;
    printf("Enter the positive number to be checked");
    scanf("%d", &N);
    k=N;
    while(N!=0)
    {
        a=N%10;
        fact=1;
        for(i=a;i>0;i--)
        {
            fact*=i;
        }
        sum+=fact;
        N=N/10;
    }
    if(sum==k)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a Strong number");
    }
    return 0;
}


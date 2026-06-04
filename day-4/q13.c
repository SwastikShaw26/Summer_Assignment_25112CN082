#include<stdio.h>
int main()
{
    int a=0,b=1,N,i,temp;
    printf("Enter the number of terms for Fibonacci Series: ");
    scanf("%d",&N);
    if(N>=1)
    {
        printf("%d",a);
    }
    if(N>=2)
    {
     printf("\n%d",b);
    }
    for(i=3;i<=N;i++)
    {
        temp=b;
        b=a+b;
        a=temp;
        printf("\n%d",b);
    }
    return 0;
}
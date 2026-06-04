#include<stdio.h>
int main()
{
    int a=0,b=1,N,i,temp;
    printf("Enter the nth term to be found ");
    scanf("%d",&N);
    if(N==1)
    {
        printf("%d",a);
    }
    else if(N==2)
    {
        printf("\n%d",b);
    }
    else
    {
    for(i=3;i<=N;i++)
    {
        temp=b;
        b=a+b;
        a=temp;
    }
       printf("\n%d",b);
    }
    return 0;
}
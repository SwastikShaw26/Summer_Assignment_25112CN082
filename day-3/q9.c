#include<stdio.h>
int main()
{
    int N,i,count=0;
    printf("Enter the positive number to be checked\n");
    scanf("%d",& N);
    for(i=1;i<=N;i++)
    {
        if((N%i)==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Prime no.");
    }
    else
    {
        printf("Not a prime no.");

    }
}
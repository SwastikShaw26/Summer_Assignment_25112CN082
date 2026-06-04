#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,k,l,count=0,num=0;
    printf("Enter the number to be checked");
    scanf("%d",&a);
    k=a;
    while(a!=0)
    {
        b=a%10;
        count++;
        a=a/10;
    }
    l=k;
    while(k!=0)
    {
        b=k%10;
        num+=pow(b,count);
        k=k/10;
    } 
    if(l==num)
    {
        printf("The provided number is Armstrong");
    }
    else
    {
        printf("The provided number is not a Armstrong number");
    }
return 0;
}
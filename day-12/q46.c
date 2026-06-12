#include <stdio.h>
#include<math.h>
int armstrong(int a)
{
    int b,k,l,count=0,num=0;
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
      return 1;
    }
    else
    {
      return 0;
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(armstrong(num))
        printf("Armstrong number");
    else
        printf("Not a Armstrong number");
    return 0;
}
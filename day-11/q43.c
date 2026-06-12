#include <stdio.h>
int prime(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++)
    {
        if((a%i)==0)
        {
            count++;
        }
    }
    if(count == 2)
        return 1;
    else
        return 0;
}
int main()
{
    int n1,result;
    printf("Enter the number: ");
    scanf("%d", &n1);
    if(prime(n1))
        printf("Prime number");
    else
        printf("Not a prime number");
    return 0;
}
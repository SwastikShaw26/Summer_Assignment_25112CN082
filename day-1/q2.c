#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter a number");
    scanf("%d",& N);
    printf("The multiplication table of %d is\n",N);
    for(i=0;i<=10;i++)
    {
        printf("%d * %d= %d\n",N,i,(N*i));
    }
    return 0;
}
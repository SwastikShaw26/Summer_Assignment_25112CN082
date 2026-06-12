#include<stdio.h>
int main()
{
    int r,i,j;
    char ch='A';
    printf("Enter the number of rows");
    scanf("%d", &r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
         ch++;
    }
    return 0;
}
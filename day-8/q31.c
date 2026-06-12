#include<stdio.h>
int main()
{
    int r,i,j;
    printf("Enter the number of rows");
    scanf("%d", &r);
    for(i=1;i<=r;i++)
    {
        char ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
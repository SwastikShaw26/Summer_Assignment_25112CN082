#include<stdio.h>
int main()
{
    int r,i,j,k,t;
    char ch;
    printf("Enter the number of rows");
    scanf("%d", &r);
    for(i=1;i<=r;i++)
    {
        for(k=1;k<=r-i;k++)
        {
            printf(" ");
        }
        for(ch='A';ch<='A'+i-1;ch++)
        {
            printf("%c",ch);
        }
        for(ch='A'+i-2;ch>='A';ch--)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
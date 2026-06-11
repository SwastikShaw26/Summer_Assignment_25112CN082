#include<stdio.h>
int main()
{
    int r,i,j,k=1;
    printf("Enter the number of rows");
    scanf("%d", &r);
    for(i=1;i<=r;i++)
    {
        for(j=r;j>=i;j--)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
        k=1;
    }
    return 0;
}
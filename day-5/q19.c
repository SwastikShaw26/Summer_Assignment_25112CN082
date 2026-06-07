#include<stdio.h>
int main()
{
    int N,i,found=0;
    printf("Enter a positive number");
    scanf("%d",&N);
    printf("The factors of %d are\n",N);
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            printf("%d\n",i);
            found=1;
        }
    }
if(found==0)
{
    printf("none");
}
return 0;
}
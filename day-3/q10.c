#include<stdio.h>
int main()
{
    int a,b,i,j,count=0,k;
    printf("Enter the lower limit and upper limit of the range\n");
    scanf("%d\n%d",&a,&b);
    printf("The prime no's in the range %d and %d are:\n",a,b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
        if((i%j)==0)
        {
            count++;
        }
        }
    if(count==2)
    {
        printf("%d\n",i);
    }
    else
    {
        k=0;
    }
    count=0;
}
if(k==0)
{
    printf("not present");
}
}
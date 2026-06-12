#include <stdio.h>
int perfect(int n)
{
  int i=0,a,sum=0;
    for(i=1;i<n;i++)
    {
        a=n%i;
     if(a==0)
     {
        sum+=i;
     }
    }
    if(sum==n)
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
    int n1;
    printf("Enter a number: ");
    scanf("%d", &n1);
    if(perfect(n1))
        printf("Perfect number");
    else
        printf("Not a Perfect number");
    return 0;
}
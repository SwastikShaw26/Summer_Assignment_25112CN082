#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,i,k,l,count,num,found=0,digit;

    printf("Enter the lower limit and upper limit of the range\n");
    scanf("%d%d",&a,&b);

    printf("The Armstrong numbers in the range %d and %d are:\n",a,b);

    for(i=a;i<=b;i++)
    {
        count = 0;
        num = 0;

        k = i;

        while(k != 0)
        {
            count++;
            k = k/10;
        }

        k = i;
        l = i;

        while(k != 0)
        {
            digit = k % 10;
            num += pow(digit,count);
            k = k/10;
        }

        if(l == num)
        {
            printf("%d\n",l);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("not present");
    }

    return 0;
}
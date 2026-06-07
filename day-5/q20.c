#include<stdio.h>

int main()
{
    int N, i, j, count, largest = 0;
    printf("Enter a positive number: ");
    scanf("%d", &N);
    for(i = 2; i <= N; i++)
    {
        if(N % i == 0)
        {
            count = 0;
            for(j = 1; j <= i; j++)
            {
                if(i % j == 0)
                {
                    count++;
                }
            }
            if(count == 2)
            {
                largest = i;
            }
        }
    }
    if(largest != 0)
    {
        printf("Largest prime factor = %d", largest);
    }
    else
    {
        printf("No prime factor found");
    }
    return 0;
}
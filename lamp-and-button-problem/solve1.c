#include <stdio.h>

int main()
{
    long long N;
    long long i;

    scanf("%lld", &N);

    int divisorCount = 0;

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            divisorCount++;
        }
    }

    if (divisorCount % 2 == 0)
    {
        printf("lampu mati");
    }
    else
    {
        printf("lampu menyala");
    }

    return 0;
}
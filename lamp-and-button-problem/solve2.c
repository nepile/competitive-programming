#include <stdio.h>

int main()
{
    long long N;
    long long i;

    scanf("%lld", &N);

    long long num = N;
    int divisorCount = 1;

    for (i = 2; i * i <= num; i++)
    {
        int factorCount = 0;
        while (num % i == 0)
        {
            factorCount++;
            num /= i;
        }

        divisorCount *= (1 + factorCount);
    }

    if (num > 1)
    {
        divisorCount *= 2;
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
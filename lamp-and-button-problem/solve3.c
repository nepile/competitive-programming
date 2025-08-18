#include <stdio.h>
#include <math.h>

int main()
{
    long long N;

    scanf("%lld", &N);

    long long s = round(sqrt(N));

    if (s * s != N)
    {
        printf("lampu mati");
    }
    else
    {
        printf("lampu menyala");
    }

    return 0;
}